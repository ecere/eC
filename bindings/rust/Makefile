.PHONY: all clean realclean distclean ecrt-sys

EC_SDK_SRC := $(dir $(realpath $(firstword $(MAKEFILE_LIST))))../../

_CF_DIR = $(EC_SDK_SRC)/
include $(_CF_DIR)crossplatform.mk

# TARGETS

all: ecrt-sys

ecrt-sys:
	+$(_MAKE) -f Makefile.ecrt-sys

clean:
	+$(_MAKE) -f Makefile.ecrt-sys clean
	
realclean:
	+$(_MAKE) -f Makefile.ecrt-sys realclean

distclean:
	+$(_MAKE) -f Makefile.ecrt-sys distclean
