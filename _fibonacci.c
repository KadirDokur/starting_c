#include<stdio.h>
#include<stdlib.h>
#define N 12
//Fibonacci dizisi oluşturur.
int main(void){
    int ilksayi=1;
    int ikincisayi=1;
    int i;
    printf("%d\n%d\n",ilksayi,ikincisayi);
    for(i=0;i<N;i++){
        int temp=ikincisayi;
        ikincisayi += ilksayi;
        ilksayi = temp;
        printf("%d\n",ikincisayi);
    }
    return 0;
}