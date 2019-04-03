#include<stdio.h>
#include<conio.h>

//Girilen sayının faktoriyelini hesaplar.
int main(void){
    int sayi;
    int sonuc=1;
    printf("Faktoriyeli alinacak sayi: ");
    scanf("%d",&sayi);
    while(0<sayi){
        sonuc *= sayi;
        sayi--; 
        }
        
    printf("Sonuc:%d",sonuc);
    getch (); //Bu olmasa da olur.
    return 0;
}
