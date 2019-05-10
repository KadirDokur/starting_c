#include<stdio.h>
#include<conio.h>

void main(){
    FILE *fp;
    char ch;
    int size=0;
    fp = fopen("one.txt","r");
    if (fp == NULL)
        printf("\nDosya acilamadi...");
    else
        printf("\nDosya acildi...");
    fseek(fp,0,SEEK_END);
    size = ftell(fp);
    printf("Dosyanin boyutu: %d\n",size);
    fclose(fp);
}