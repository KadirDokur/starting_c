#include<stdio.h>
//Fonksiyon prototipi
int Max(int a,int b);

int main(void){
    int i,j,result;
    printf("Iki sayi giriniz: ");
    scanf("%d%d",&i,&j);
    result = Max(i,j);
    printf("En buyuk sayi: %d",result);
    return 0;
}

//Fonksiyon tanimlama
int Max(int x,int y){
    if(x>y)
        return x;
    else
        return y;
}