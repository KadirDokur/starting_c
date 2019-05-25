#include<stdio.h>

//Fonksiyon prototipi
int factoriyel1(int x);
int factoriyel2(int x);

int main(){
    int a,b;
    
    printf("Bir sayi giriniz:");
    scanf("%d",&a);
    b = factoriyel1(a);
    printf("Ozyineli sonuc: %d\n",b);
    b = factoriyel2(a);
    printf("Dongulu sonuc: %d\n",b);
    return 0;
}

//Yinelemeli olarak faktoriyel hesabi

int factoriyel1(int x){
    int r = 1;
    if(x==1)
        return 1;
    else 
        r=x*factoriyel1(x-1);
    return r;
}

//Dongu kullanarak faktoriyel hesabi
int factoriyel2(int x){
    int r = 1;
    while(x>1)
        r *= x--;
    return r;
}