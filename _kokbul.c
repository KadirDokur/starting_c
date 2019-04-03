/*
ax^2+bx+c denkleminin köklerini bulmak için program
*/


#include<stdio.h>
#include<math.h>
// ax^2 + bx +c köklerini hesaplayan program
int main(void){
    int a,b,c;
    float x1,x2;
    float delta;
    printf("x^2 katsayisini giriniz:"),
    scanf("%d",&a);
    printf("x katsayisini giriniz:"),
    scanf("%d",&b);
    printf("c sabitini giriniz:"),
    scanf("%d",&c);
    delta = b*b-4*a*c;
    x1= (-b + (sqrt(delta)) )/2*a;
    x2= (-b - (sqrt(delta)) )/2*a;
    printf("Denklemin 1. koku: %.3f\n",x1);
    printf("Denklemin 2. koku: %.3f",x2);
    return 0;
}