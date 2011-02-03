#include <stdio.h>


int main(){
    FILE * file;
    FILE * file2;
    file= fopen("/root/test_fopen_cfile.c.zrog", "r+");
    if(file==NULL){
        printf("test");
    }
    else{
        aCmd->bogus=1;
    }
    printf("later");
    file2= fopen("/root/test_fopen_cfile.c.zrog", "r+");

    return 0;
}
