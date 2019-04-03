#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//Girilen sayinin asal olup olmadigini kontrol eder.
int main(void){
    int i,sayi,sayac=0;
    printf("Pozitif bir sayi giriniz: ");
    scanf("%d",&sayi);
    if(sayi<0){
        printf("Lutfen tekrar deneyip pozitif bir sayi giriniz.\n");
        abort ();
    }
    for(i=1;i<=sayi;i++){
        if(sayi%i==0)
            sayac++;
    }
    if(sayac==2){
        printf("%d sayisi asaldir.",sayi);
    }
    else printf("%d sayisi asal degildir.",sayi);
    getch();
    return 0;
}