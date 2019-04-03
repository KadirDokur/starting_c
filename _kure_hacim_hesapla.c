#include<stdio.h>
#define PI 3.14

int main(void){
    int yaricap;
    printf("Kurenin yaricapini giriniz: ");
    scanf("%d",&yaricap);
    printf("Kurenin hacmi: %.3f",(4/3.0)*PI*yaricap*yaricap*yaricap);
    return 0;
}
