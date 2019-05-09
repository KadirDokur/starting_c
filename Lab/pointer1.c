#include<stdio.h>

int main(void){
    int *p;
    int a[]= {1,3,5,2,7};
    p = &a[0];
    for(int i=0;i<5;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}