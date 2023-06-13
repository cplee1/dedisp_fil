DEDISP_HOME ?= /astro/mwavcs/cplee/software/dedisp/cplee-build
include Makefile.inc

dedisp_fil: dedisp_fil.c
	$(NVCC) -Xcompiler -Wall -O3 -I$(DEDISP_HOME)/include -o dedisp_fil dedisp_fil.c -L$(DEDISP_HOME)/lib -ldedisp -lm

clean:
	rm -f testdedisp
