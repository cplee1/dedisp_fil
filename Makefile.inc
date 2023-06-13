# The definitions in this file should be changed to match your system

CUDA_PATH = /pawsey/mwa_sles12sp5/devel/binary/cuda/11.4.2

CUDA_DIR   = $(CUDA_PATH)
THRUST_DIR = $(CUDA_DIR)/include

LIB_ARCH   = lib64
GPU_ARCH   = sm_70

GCC        = gcc
GXX        = g++
AR         = ar
NVCC       = $(CUDA_DIR)/bin/nvcc #-Xptxas -abi=no
DOXYGEN    = doxygen
RM         = rm
ECHO       = echo
MKFLAGS    = 

DEDISP_DEBUG = 0

#.SILENT :
