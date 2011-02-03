all: test_fopenV2

test_fopen: test_fopen_cfile.c
	gccmelt -fmelt-mode=translatetomodule -fmelt-arg=./test_fopen.melt -c empty.c
	gccmelt -Wall -fmelt-mode=test_fopen -fmelt-debug  -fmelt-init=@@:test_fopen -fmelt-module-path=. -fmelt-source-path=. -O2 -fdump-tree-all test_fopen_cfile.c -o test_fopen_cfile.o

