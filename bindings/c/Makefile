.PHONY: all clean realclean distclean ecrt_c

EC_SDK_SRC := $(dir $(realpath $(firstword $(MAKEFILE_LIST))))../../

_CF_DIR = $(EC_SDK_SRC)/
include $(_CF_DIR)crossplatform.mk

# TARGETS

all: ecrt_c

ecrt_c:
	+$(_MAKE) -f Makefile.ecrt_c
	+$(_MAKE) -f Makefile.ecrt_c.static

clean:
	+$(_MAKE) -f Makefile.ecrt_c clean
	+$(_MAKE) -f Makefile.ecrt_c.static clean

realclean:
	+$(_MAKE) -f Makefile.ecrt_c realclean
	+$(_MAKE) -f Makefile.ecrt_c.static realclean

distclean:
	+$(_MAKE) -f Makefile.ecrt_c distclean
	+$(_MAKE) -f Makefile.ecrt_c.static distclean
