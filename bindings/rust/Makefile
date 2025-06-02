.PHONY: all clean realclean distclean ecrt-sys ecrt

EC_SDK_SRC := $(dir $(realpath $(firstword $(MAKEFILE_LIST))))../../

_CF_DIR = $(EC_SDK_SRC)/
include $(_CF_DIR)crossplatform.mk

# TARGETS

all: ecrt-sys ecrt

ecrt-sys:
	+$(_MAKE) -f Makefile.ecrt-sys

ecrt:
	+$(_MAKE) -f Makefile.ecrt

clean:
	+$(_MAKE) -f Makefile.ecrt-sys clean
	+$(_MAKE) -f Makefile.ecrt clean
	
realclean:
	+$(_MAKE) -f Makefile.ecrt-sys realclean
	+$(_MAKE) -f Makefile.ecrt realclean

distclean:
	+$(_MAKE) -f Makefile.ecrt-sys distclean
	+$(_MAKE) -f Makefile.ecrt distclean
