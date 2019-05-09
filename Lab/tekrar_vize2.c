#include<stdio.h>
// Tek sayıları sayan program
int main(){
    int s=0, i=0, a[]={1,39,2,4,6,51,7101,8,43,1,4,11};
    int *ap=(int*)&a;
    do{
        s += *ap++ & 1;
    }while(i++<12);
    printf("%d\n",s);
    return 0;
}