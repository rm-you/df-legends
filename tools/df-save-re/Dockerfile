FROM python:3.12-slim

COPY --from=ghcr.io/astral-sh/uv:latest /uv /uvx /bin/

WORKDIR /app

ENV UV_COMPILE_BYTECODE=1
ENV UV_LINK_MODE=copy
ENV DF_STRUCTURES_DIR=/app/data/df-structures

COPY tools/df-save-re/pyproject.toml tools/df-save-re/README.md ./
COPY tools/df-save-re/df_save_re ./df_save_re
COPY tools/df-save-re/alembic ./alembic
COPY tools/df-save-re/alembic.ini ./
COPY data/df-structures ./data/df-structures

RUN uv pip install --system --no-cache -e .

EXPOSE 8765

CMD ["df-save-re", "serve", "--host", "0.0.0.0", "--port", "8765", "--data-dir", "/data/legends"]
