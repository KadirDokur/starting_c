#include<stdio.h>
void hata(); //Yukaridan asagiya okundugundan bunu yazmamiz uyarilari onler.
int main(void){
    hata(23);
    return 0;
}


void hata(int kod){
    printf("Hata kodu %d",kod);
}