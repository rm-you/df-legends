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
