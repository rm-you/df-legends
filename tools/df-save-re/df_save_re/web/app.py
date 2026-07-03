"""FastAPI application for browsing extracted fortress legends data."""

from __future__ import annotations

from pathlib import Path

from fastapi import FastAPI, HTTPException, Query, Request
from fastapi.responses import HTMLResponse
from fastapi.staticfiles import StaticFiles
from fastapi.templating import Jinja2Templates

from ..db.paths import DEFAULT_DATA_DIR
from .queries import LegendsStore

_PACKAGE_DIR = Path(__file__).resolve().parent


def create_app(*, data_dir: Path | None = None) -> FastAPI:
    store = LegendsStore(data_dir or DEFAULT_DATA_DIR)
    templates = Jinja2Templates(directory=str(_PACKAGE_DIR / "templates"))

    app = FastAPI(
        title="DF Legends Explorer",
        description="Proof-of-concept browser for extracted Dwarf Fortress world history",
        version="0.1.0",
    )
    app.mount("/static", StaticFiles(directory=str(_PACKAGE_DIR / "static")), name="static")
    app.state.store = store
    app.state.templates = templates

    def render(request: Request, template: str, **context):
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
        return render(request, "index.html", entries=entries, data_dir=str(store.data_dir))

    @app.get("/world/{slug}", response_class=HTMLResponse)
    def world_overview(request: Request, slug: str):
        entry = store.entry_for_slug(slug)
        if entry is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            world = store.get_world(session)
            counters = store.get_header_counters(session)
            site_meta = store.get_site_catalog_meta(session)
            histfig_meta = store.get_histfig_catalog_meta(session)
            history_meta = store.get_history_events_meta(session)
            history_stats = store.get_history_stats(session)
            notes = store.get_latest_extraction_notes(session)
            entity_classes = store.get_entity_classes(session)
            layer_status = store.get_layer_status(session)
            record_counts = store.get_record_counts(session)
        return render(
            request,
            "world_overview.html",
            entry=entry,
            slug=slug,
            world=world,
            counters=counters,
            site_meta=site_meta,
            histfig_meta=histfig_meta,
            history_meta=history_meta,
            history_stats=history_stats,
            notes=notes,
            entity_classes=entity_classes,
            layer_status=layer_status,
            record_counts=record_counts,
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
        return render(
            request,
            "entity_detail.html",
            slug=slug,
            entity=entity,
            display_name=store.entity_display(entity),
            sites=sites,
            figures=figures,
            entity_names=names,
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
        return render(
            request,
            "site_detail.html",
            slug=slug,
            site=site,
            civ=civ,
            owner=owner,
            civ_name=store.entity_display(civ),
            owner_name=store.entity_display(owner),
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
        return render(
            request,
            "figures.html",
            slug=slug,
            figures=figure_rows,
            civ_options=civ_options,
            civ_id=civ_id,
            selected_civ=selected_civ,
            search=q or "",
        )

    @app.get("/world/{slug}/figures/{figure_id}", response_class=HTMLResponse)
    def figure_detail(request: Request, slug: str, figure_id: int):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
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
            timeline = store.get_events_for_figure(session, figure_id)
            links = store.get_figure_links(session, figure_id)
            skills = store.get_figure_skills(session, figure_id)
            relationships = store.get_figure_relationships(session, figure_id)
            record = store.figure_record(figure)
            link_target_ids = [ln.target_id for ln in links if ln.target_id is not None]
            rel_hf_ids = []
            for rel in relationships:
                if rel.source_hf is not None:
                    rel_hf_ids.append(rel.source_hf)
                if rel.target_hf is not None:
                    rel_hf_ids.append(rel.target_hf)
            figure_names = store.figure_name_map(
                session, list(set(link_target_ids + rel_hf_ids))
            )
        return render(
            request,
            "figure_detail.html",
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
            links=links,
            skills=skills,
            relationships=relationships,
            record=record,
            figure_names=figure_names,
        )

    @app.get("/world/{slug}/events", response_class=HTMLResponse)
    def events(
        request: Request,
        slug: str,
        event_type: str | None = Query(default=None),
        year: int | None = Query(default=None),
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
            hf_ids = [e.hfid for e in event_rows if e.hfid is not None and e.hfid >= 0]
            figure_names = store.figure_name_map(session, hf_ids)
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
            figure_names=figure_names,
        )

    @app.get("/world/{slug}/events/{event_id}", response_class=HTMLResponse)
    def event_detail(request: Request, slug: str, event_id: int):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            event = store.get_event(session, event_id)
            if event is None:
                raise HTTPException(status_code=404, detail="Event not found")
            fields = store.event_fields(event)
            hf_ids = [
                v
                for k, v in fields.items()
                if isinstance(v, int) and v >= 0 and ("hf" in k or "histfig" in k)
            ]
            if event.hfid is not None and event.hfid >= 0:
                hf_ids.append(event.hfid)
            figure_names = store.figure_name_map(session, hf_ids)
            site = store.get_site(session, event.site_id) if event.site_id and event.site_id >= 0 else None
            civ = store.get_entity(session, event.civ_id) if event.civ_id and event.civ_id >= 0 else None
        return render(
            request,
            "event_detail.html",
            slug=slug,
            event=event,
            fields=fields,
            figure_names=figure_names,
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
            hf_ids = [e.hfid for e in event_rows if e.hfid is not None and e.hfid >= 0]
            figure_names = store.figure_name_map(session, hf_ids)
        return render(
            request,
            "collection_detail.html",
            slug=slug,
            collection=collection,
            display_name=store.collection_display(collection),
            record=record,
            events=event_rows,
            children=children,
            figure_names=figure_names,
        )

    @app.get("/world/{slug}/eras", response_class=HTMLResponse)
    def eras(request: Request, slug: str):
        if store.entry_for_slug(slug) is None:
            raise HTTPException(status_code=404, detail="World not found in registry")
        with store.session(slug) as session:
            era_rows = store.get_eras(session)
            era_records = {e.id: store.era_record(e) for e in era_rows}
        return render(
            request, "eras.html", slug=slug, eras=era_rows, era_records=era_records
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
            counters = store.get_header_counters(session)
        return render(
            request,
            "history.html",
            slug=slug,
            history_meta=history_meta,
            history_stats=history_stats,
            histfig_meta=histfig_meta,
            anchors=anchors,
            landmarks=landmarks,
            counters=counters,
        )

    @app.get("/health")
    def health():
        return {"status": "ok", "worlds": len(store.registry())}

    return app
