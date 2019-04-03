#include<stdio.h>
#include<conio.h>

//for döngüsü ile faktöriyel hesaplama

int main(){
    int sayi;

    printf("Bir sayı gir");
    scanf("%d", &sayi);


    int sonuc = 1;
    int i;
    for(i=1; i > sayi; i++){
        sonuc *= i

    }
    printf("%d", sonuc);
}