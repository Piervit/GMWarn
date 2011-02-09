/*
    (C) Copyright 2011 Pierre Vittet
    This test_fopen.melt file is part of GMWarn.

    GMWarn is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3, or (at your option)
    any later version.

    GMWarn is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with GMWarn; see the file COPYING3.  If not see
    <http://www.gnu.org/licenses/>.
*/





#include <stdio.h>


int main(){
    FILE * file;
    FILE * file2;
    file= fopen("/root/test_fopen_cfile.c", "r+");
    if(file==NULL){
        printf("test");
    }
    file2= fopen("/root/test_fopen_cfile.c", "r+");
    printf("no test on file2");
    return 0;
}
