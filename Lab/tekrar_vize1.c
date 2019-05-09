#include<stdio.h>

int main(){
    int a=9,b=7;
    printf("%d\n",(a>b)?a:b);
    printf("%d\n",((a-b)>>31) & b | ~((a-b)>>31) & a); //Üsttekiyle aynı işi yapıyor.
    return 0;
}