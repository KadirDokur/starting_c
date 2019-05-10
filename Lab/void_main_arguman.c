#include<stdio.h>

void main(int argc,char **argv){
    int i;
    printf("Girilen arguman sayisi: %d\n",argc);
    for(i=0;i<argc;i++)
        printf("%s\n",argv[i]);
}
// Dev c++'da hata veriyor.