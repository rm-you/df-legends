"""FastAPI application for browsing extracted fortress legends data."""

from __future__ import annotations

from pathlib import Path

from fastapi import FastAPI, HTTPException, Query, Request
from fastapi.responses import HTMLResponse, JSONResponse
from fastapi.staticfiles import StaticFiles
from fastapi.templating import Jinja2Templates

from ..db.paths import DEFAULT_DATA_DIR
from .import_jobs import ImportJobManager
from .presentation import (
    build_resolve_context,
    enum_label_for_field,
    format_link_tenure,
    humanize_field_name,
    humanize_link_type,
    humanize_type_name,
    parse_link_extra,
    prettify_site_name,
    resolve_event_fields,
    resolve_narrative_event_fields,
    sex_label,
    summarize_event,
    summarize_events,
    timeline_highlight,
    valid_year,
)
from .params import OptionalIntQuery, OptionalStrQuery, build_page_query
from .queries import LegendsStore
from .saves_catalog import SaveRegionsCache, find_region_dir, list_save_regions

_PACKAGE_DIR = Path(__file__).resolve().parent


def create_app(
    *,
    data_dir: Path | None = None,
    saves_dir: Path | None = None,
) -> FastAPI:
    store = LegendsStore(data_dir or DEFAULT_DATA_DIR)
    templates = Jinja2Templates(directory=str(_PACKAGE_DIR / "templates"))
    resolved_saves_dir = saves_dir.resolve() if saves_dir else None

    regions_cache = SaveRegionsCache()

    def _on_import_complete(slug: str) -> None:
        store.clear_engine(slug)
        regions_cache.invalidate()

    job_manager = ImportJobManager(on_complete=_on_import_complete)

    def _debug_mode(request: Request) -> bool:
        return request.query_params.get("debug") == "1"

    templates.env.globals["humanize_type"] = humanize_type_name
    templates.env.globals["humanize_field"] = humanize_field_name
    templates.env.globals["humanize_link_type"] = humanize_link_type
    templates.env.globals["sex_label"] = sex_label
    templates.env.globals["parse_link_extra"] = parse_link_extra
    templates.env.globals["format_link_tenure"] = format_link_tenure
    templates.env.globals["timeline_highlight"] = timeline_highlight
    templates.env.globals["valid_year"] = valid_year
    templates.env.globals["prettify_site_name"] = prettify_site_name
    templates.env.globals["build_page_query"] = build_page_query

    app = FastAPI(
        title="DF Legends Explorer",
        description="Browser for extracted Dwarf Fortress world history",
        version="0.1.0",
    )
    app.mount("/static", StaticFiles(directory=str(_PACKAGE_DIR / "static")), name="static")
    app.state.store = store
    app.state.templates = templates
    app.state.saves_dir = resolved_saves_dir
    app.state.job_manager = job_manager

    def render(request: Request, template: str, **context):
        slug = context.get("slug")
        if slug and "world_name" not in context:
            entry = store.entry_for_slug(slug)
            if entry:
                context["world_name"] = entry.world_name
        context.setdefault("debug_mode", _debug_mode(request))
        return templates.TemplateResponse(
            request,
            template,
            {
                "request": request,
                "store": store,
                **context,
            },
        )

    @app.get("/", response_class=HTMLResponse)
    def index(request: Request):
        entries = store.registry()
        return render(
            request,
            "index.html",
            entries=entries,
            data_dir=str(store.data_dir),
            saves_dir=str(resolved_saves_dir) if resolved_saves_dir else None,
        )

    @app.get("/api/regions")
    def api_regions():
        if resolved_saves_dir is None:
            raise HTTPException(status_code=404, detail="Saves directory not configured")
        rows = list_save_regions(
            resolved_saves_dir,
            store.data_dir,
            job_manager=job_manager,
            cache=regions_cache,
        )
        return [row.to_dict() for row in rows]

    @app.post("/api/regions/{region_name}/import")
    def api_start_import(region_name: str):
        if resolved_saves_dir is None:
            raise HTTPException(status_code=404, detail="Saves directory not configured")
        region_dir = find_region_dir(resolved_saves_dir, region_name)
        if region_dir is None:
            raise HTTPException(status_code=404, detail=f"Region not found: {region_name}")
        if job_manager.is_running(region_name):
            raise HTTPException(status_code=409, detail="Import already running")
        try:
            job = job_manager.start_import(
                region_name,
                region_dir,
                data_dir=store.data_dir,
            )
        except RuntimeError as exc:
            raise HTTPException(status_code=409, detail=str(exc)) from exc
        return JSONResponse(job.to_dict(), status_code=202)

    @app.get("/api/regions/{region_name}/import")
    def api_import_status(region_name: str):
        job = job_manager.get_job(region_name)
        if job is None:
            raise HTTPException(status_code=404, detail="No import job for this region")
        return job.to_dict()

    @app.get("/world/{slug}", response_class=HTMLResponse)
    def world_overview(request: Request, slug: str):
        entry = store.entry_for_slug(slug)
        if entry is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            world = store.get_world(session)
            counters = store.get_header_counters(session)
            entity_classes = store.get_entity_classes(session)
        return render(
            request,
            "world_overview.html",
            entry=entry,
            slug=slug,
            world=world,
            counters=counters,
            entity_classes=entity_classes,
        )

    @app.get("/world/{slug}/entities", response_class=HTMLResponse)
    def entities(
        request: Request,
        slug: str,
        named_only: bool = Query(default=False),
        entity_class: str | None = Query(default=None),
    ):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            entities = store.get_entities(
                session, named_only=named_only, entity_class=entity_class or None
            )
            classes = store.get_entity_classes(session)
        return render(
            request,
            "entities.html",
            slug=slug,
            entities=entities,
            classes=classes,
            named_only=named_only,
            selected_class=entity_class or "",
        )

    @app.get("/world/{slug}/entities/{entity_id}", response_class=HTMLResponse)
    def entity_detail(request: Request, slug: str, entity_id: int):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            entity = store.get_entity(session, entity_id)
            if entity is None:
                raise HTTPException(status_code=404, detail="Entity not found")
            sites = store.get_sites_for_entity(session, entity_id)
            figures = store.get_figures_for_entity(session, entity_id)
            names = store.entity_name_map(session)
            civ_events = store.get_events_for_entity(session, entity_id)
            officials = store.get_entity_officials(session, entity_id)
            official_ids = [ln.figure_id for ln in officials]
            ctx = build_resolve_context(
                store, session, slug, events=civ_events, extra_figure_ids=official_ids
            )
            event_summaries = summarize_events(civ_events, store, ctx)
            figure_names = store.figure_name_map(session, official_ids)
        return render(
            request,
            "entity_detail.html",
            slug=slug,
            entity=entity,
            display_name=store.entity_display(entity),
            sites=sites,
            figures=figures,
            entity_names=names,
            civ_events=civ_events,
            event_summaries=event_summaries,
            officials=officials,
            figure_names=figure_names,
        )

    @app.get("/world/{slug}/sites", response_class=HTMLResponse)
    def sites(
        request: Request,
        slug: str,
        civ_id: int | None = Query(default=None),
        q: str | None = Query(default=None),
    ):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            site_rows = store.get_sites(session, civ_id=civ_id, search=q)
            civ_options = store.get_entities(session, named_only=True)
            selected_civ = store.get_entity(session, civ_id) if civ_id else None
        return render(
            request,
            "sites.html",
            slug=slug,
            sites=site_rows,
            civ_options=civ_options,
            civ_id=civ_id,
            selected_civ=selected_civ,
            search=q or "",
        )

    @app.get("/world/{slug}/sites/{site_id}", response_class=HTMLResponse)
    def site_detail(request: Request, slug: str, site_id: int):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            site = store.get_site(session, site_id)
            if site is None:
                raise HTTPException(status_code=404, detail="Site not found")
            civ = store.get_entity(session, site.civ_id) if site.civ_id else None
            owner = (
                store.get_entity(session, site.cur_owner_id)
                if site.cur_owner_id
                else None
            )
            site_events = store.get_events_for_site(session, site_id)
            populations = store.get_site_populations(session, site_id)
            ctx = build_resolve_context(store, session, slug, events=site_events)
            event_summaries = summarize_events(site_events, store, ctx)
        return render(
            request,
            "site_detail.html",
            slug=slug,
            site=site,
            civ=civ,
            owner=owner,
            civ_name=store.entity_display(civ),
            owner_name=store.entity_display(owner),
            site_events=site_events,
            event_summaries=event_summaries,
            populations=populations,
        )

    @app.get("/world/{slug}/figures", response_class=HTMLResponse)
    def figures(
        request: Request,
        slug: str,
        civ_id: int | None = Query(default=None),
        q: str | None = Query(default=None),
    ):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            figure_rows = store.get_figures(session, civ_id=civ_id, search=q)
            civ_options = store.get_entities(session, named_only=True)
            selected_civ = store.get_entity(session, civ_id) if civ_id else None
            ctx = build_resolve_context(store, session, slug)
        return render(
            request,
            "figures.html",
            slug=slug,
            figures=figure_rows,
            civ_options=civ_options,
            civ_id=civ_id,
            selected_civ=selected_civ,
            search=q or "",
            resolve_ctx=ctx,
        )

    @app.get("/world/{slug}/figures/{figure_id}", response_class=HTMLResponse)
    def figure_detail(
        request: Request,
        slug: str,
        figure_id: int,
        page: int = Query(default=1, ge=1),
    ):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        per_page = 100
        with store.session(slug) as session:
            figure = store.get_figure(session, figure_id)
            if figure is None:
                raise HTTPException(status_code=404, detail="Figure not found")
            civ = store.get_entity(session, figure.civ_id) if figure.civ_id else None
            family_head = (
                store.get_figure(session, figure.family_head_id)
                if figure.family_head_id
                else None
            )
            nemesis = (
                store.get_figure(session, figure.nemesis_id) if figure.nemesis_id else None
            )
            timeline, timeline_total = store.get_events_for_figure(
                session,
                figure_id,
                limit=per_page,
                offset=(page - 1) * per_page,
            )
            links = store.get_figure_links(session, figure_id)
            skills = store.get_figure_skills(session, figure_id)
            relationships = store.get_figure_relationships(session, figure_id)
            record = store.figure_record(figure)
            link_target_ids = [ln.target_id for ln in links if ln.target_id is not None]
            rel_hf_ids: list[int] = []
            for rel in relationships:
                if rel.source_hf is not None:
                    rel_hf_ids.append(rel.source_hf)
                if rel.target_hf is not None:
                    rel_hf_ids.append(rel.target_hf)
            ctx = build_resolve_context(
                store,
                session,
                slug,
                events=timeline,
                extra_figure_ids=list(
                    set(link_target_ids + rel_hf_ids + [figure_id])
                ),
            )
            event_summaries = summarize_events(timeline, store, ctx)
            figure_names = store.figure_name_map(
                session, list(set(link_target_ids + rel_hf_ids))
            )
            site_names = ctx.site_names
            entity_names = ctx.entity_names
            profession_label = enum_label_for_field(ctx, "profession", figure.profession)
            top_skills = skills[:3]
        return render(
            request,
            "figure_detail.html",
            entry=store.entry_for_slug(slug),
            slug=slug,
            figure=figure,
            display_name=store.figure_display(figure),
            civ=civ,
            civ_name=store.entity_display(civ),
            family_head=family_head,
            family_head_name=store.figure_display(family_head) if family_head else None,
            nemesis=nemesis,
            nemesis_name=store.figure_display(nemesis) if nemesis else None,
            timeline=timeline,
            timeline_total=timeline_total,
            timeline_page=page,
            timeline_pages=max(1, -(-timeline_total // per_page)),
            event_summaries=event_summaries,
            links=links,
            skills=skills,
            top_skills=top_skills,
            relationships=relationships,
            record=record,
            figure_names=figure_names,
            site_names=site_names,
            entity_names=entity_names,
            profession_label=profession_label,
            resolve_ctx=ctx,
        )

    @app.get("/world/{slug}/events", response_class=HTMLResponse)
    def events(
        request: Request,
        slug: str,
        event_type: OptionalStrQuery = None,
        year: OptionalIntQuery = None,
        page: int = Query(default=1, ge=1),
    ):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        per_page = 100
        with store.session(slug) as session:
            event_rows, total = store.get_events(
                session,
                event_type=event_type or None,
                year=year,
                page=page,
                per_page=per_page,
            )
            types = store.get_event_types(session)
            ctx = build_resolve_context(store, session, slug, events=event_rows)
            event_summaries = summarize_events(event_rows, store, ctx)
        return render(
            request,
            "events.html",
            slug=slug,
            events=event_rows,
            total=total,
            types=types,
            selected_type=event_type or "",
            year=year,
            page=page,
            pages=max(1, -(-total // per_page)),
            event_summaries=event_summaries,
        )

    @app.get("/world/{slug}/events/{event_id}", response_class=HTMLResponse)
    def event_detail(request: Request, slug: str, event_id: int):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            event = store.get_event(session, event_id)
            if event is None:
                raise HTTPException(status_code=404, detail="Event not found")
            ctx = build_resolve_context(store, session, slug, events=[event])
            fields = store.event_fields(event)
            summary = summarize_event(event, fields, ctx)
            resolved_fields = resolve_event_fields(
                fields, ctx, include_debug=_debug_mode(request)
            )
            narrative_fields = resolve_narrative_event_fields(fields, ctx)
            parent_collections = store.get_collections_for_event(session, event_id)
            site = store.get_site(session, event.site_id) if event.site_id and event.site_id >= 0 else None
            civ = store.get_entity(session, event.civ_id) if event.civ_id and event.civ_id >= 0 else None
        return render(
            request,
            "event_detail.html",
            slug=slug,
            event=event,
            fields=fields,
            summary=summary,
            resolved_fields=resolved_fields,
            narrative_fields=narrative_fields,
            parent_collections=parent_collections,
            site=site,
            civ=civ,
            civ_name=store.entity_display(civ) if civ else None,
        )

    @app.get("/world/{slug}/collections", response_class=HTMLResponse)
    def collections(
        request: Request,
        slug: str,
        collection_type: str | None = Query(default=None),
        q: str | None = Query(default=None),
        named_only: bool = Query(default=False),
        page: int = Query(default=1, ge=1),
    ):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        per_page = 100
        with store.session(slug) as session:
            collection_rows, total = store.get_collections(
                session,
                collection_type=collection_type or None,
                search=q,
                named_only=named_only,
                page=page,
                per_page=per_page,
            )
            types = store.get_collection_types(session)
        return render(
            request,
            "collections.html",
            slug=slug,
            collections=collection_rows,
            total=total,
            types=types,
            selected_type=collection_type or "",
            search=q or "",
            named_only=named_only,
            page=page,
            pages=max(1, -(-total // per_page)),
        )

    @app.get("/world/{slug}/collections/{collection_id}", response_class=HTMLResponse)
    def collection_detail(request: Request, slug: str, collection_id: int):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            collection = store.get_collection(session, collection_id)
            if collection is None:
                raise HTTPException(status_code=404, detail="Collection not found")
            record = store.collection_record(collection)
            event_rows = store.get_events_by_ids(
                session, record.get("events") or [], limit=500
            )
            children = store.get_collections_by_ids(
                session, record.get("collections") or []
            )
            ctx = build_resolve_context(store, session, slug, events=event_rows)
            event_summaries = summarize_events(event_rows, store, ctx)
        return render(
            request,
            "collection_detail.html",
            slug=slug,
            collection=collection,
            display_name=store.collection_display(collection),
            record=record,
            events=event_rows,
            children=children,
            event_summaries=event_summaries,
            resolve_ctx=ctx,
        )

    @app.get("/world/{slug}/chronicle", response_class=HTMLResponse)
    def chronicle(
        request: Request,
        slug: str,
        event_type: OptionalStrQuery = None,
        year: OptionalIntQuery = None,
        page: int = Query(default=1, ge=1),
        all_events: bool = Query(default=False),
        include_preworld: bool = Query(default=False),
    ):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        per_page = 100
        with store.session(slug) as session:
            event_rows, total = store.get_chronicle_events(
                session,
                event_type=event_type or None,
                year=year,
                page=page,
                per_page=per_page,
                min_year=-999 if include_preworld else 0,
                narrative_only=not all_events,
            )
            types = store.get_event_types(session)
            ctx = build_resolve_context(store, session, slug, events=event_rows)
            event_summaries = summarize_events(event_rows, store, ctx)
        return render(
            request,
            "chronicle.html",
            slug=slug,
            events=event_rows,
            total=total,
            types=types,
            selected_type=event_type or "",
            year=year,
            page=page,
            pages=max(1, -(-total // per_page)),
            event_summaries=event_summaries,
            narrative_only=not all_events,
            include_preworld=include_preworld,
        )

    @app.get("/world/{slug}/search", response_class=HTMLResponse)
    def search(request: Request, slug: str, q: str = Query(default="")):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            results = store.search_world(session, q) if q.strip() else {
                "figures": [],
                "sites": [],
                "entities": [],
                "events": [],
            }
            ctx = build_resolve_context(store, session, slug, events=results.get("events", []))
            event_summaries = summarize_events(results.get("events", []), store, ctx)
        return render(
            request,
            "search.html",
            slug=slug,
            q=q,
            results=results,
            event_summaries=event_summaries,
        )

    @app.get("/world/{slug}/eras", response_class=HTMLResponse)
    def eras(request: Request, slug: str):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            era_rows = store.get_eras(session)
            era_records = {e.id: store.era_record(e) for e in era_rows}
            hf_ids: list[int] = []
            for rec in era_records.values():
                title = rec.get("title") or {}
                for key in ("histfig_1", "histfig_2"):
                    val = title.get(key)
                    if isinstance(val, int) and val >= 0:
                        hf_ids.append(val)
            figure_names = store.figure_name_map(session, hf_ids)
        return render(
            request,
            "eras.html",
            slug=slug,
            eras=era_rows,
            era_records=era_records,
            figure_names=figure_names,
        )

    @app.get("/world/{slug}/history", response_class=HTMLResponse)
    def history(request: Request, slug: str):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            history_meta = store.get_history_events_meta(session)
            history_stats = store.get_history_stats(session)
            histfig_meta = store.get_histfig_catalog_meta(session)
            anchors = store.get_vector_anchors(session)
            landmarks = store.get_layout_landmarks(session)
            layer_status = store.get_layer_status(session)
            record_counts = store.get_record_counts(session)
            notes = store.get_latest_extraction_notes(session)
        return render(
            request,
            "history.html",
            slug=slug,
            history_meta=history_meta,
            history_stats=history_stats,
            histfig_meta=histfig_meta,
            anchors=anchors,
            landmarks=landmarks,
            layer_status=layer_status,
            record_counts=record_counts,
            notes=notes,
        )

    @app.get("/health")
    def health():
        return {"status": "ok", "worlds": len(store.registry())}

    return app
