# src/test/modules/worker_spi/Makefile

MODULES = worker_spi

EXTENSION = worker_spi
DATA = worker_spi--1.0.sql
PGFILEDESC = "worker_spi - background worker example"

TAP_TESTS = 1

ifdef USE_PGXS
PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
else
subdir = src/test/modules/worker_spi
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
