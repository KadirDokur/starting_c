#include<stdio.h>
int func(int a, int b);
int main(void){
    printf("%d\n",func(2,3));
    return 0;
}
int func(int a,int b){
    int c;
    c = a + b;
    return c;
}