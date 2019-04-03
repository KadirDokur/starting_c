#include<stdio.h>
#include<string.h>

void ters_cevir(char metin[]){
    int uzunluk,gecici;
    uzunluk=strlen(metin);
    for(int i=0;i<uzunluk/2;i++){
        gecici=metin[i];
        metin[i]=metin[uzunluk-1-i];
        metin[uzunluk-1-i]=gecici;
    }
}

int main(){
    char text[200];
    printf("Metin giriniz: ");
    scanf("%s",text);
    ters_cevir(text);
    printf("%s",text);
    return 0;
}