#include<stdio.h>

int func(void);
int main (void){
    printf("Fonksiyon %d sayisini dondurdu\n",func());
    return 0;
}

int func(void){
    int i;
    printf("Bir tamsayi giriniz: ");
    scanf("%d",&i);
    return i;
}