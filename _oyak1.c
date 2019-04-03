#include<stdio.h>
/*
10 saate kadar 5 ₺
10 saat den sonra 20 saate kadar her saat 3 ₺
20 saatden fazlası saat başı 2 ₺
*/
int main(void){
    int saat;
    int ucret;
    printf("Saat giriniz: ");
    scanf("%d",&saat);
    if(saat<=10){
        ucret = saat * 5;
    }
    else if(saat>10 && saat<=20){
        ucret = (saat-10)*3+50;

    }
    else if(saat>20){
        ucret = (saat-20)*2+80;
    }
    printf("Ucretiniz: %d",ucret);
    return 0;
}


