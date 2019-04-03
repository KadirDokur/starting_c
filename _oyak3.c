#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    // int i=0;
    //while(i<=100){
    //    if(i&1==1)
    //        printf("%d\t",i);
    //    i++;
    //} 
    int i;
    for(i=1;i<100000000;i+=2)
        printf("%d\t",i);
        if(i==140000){
            abort();
        }
    getch();
    return 0;
}

