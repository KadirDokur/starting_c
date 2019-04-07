#include<stdio.h>
//Küçükten büyüğe sıralama
int main(){
    int a[5]={1,3,28,0,-3};
    int i,j,t;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j])
                t=a[j],a[j]=a[i],a[i]=t;
        }
    }
    for(i=0;i<5;i++)
        printf("%d  ",a[i]);
    return 0;
}