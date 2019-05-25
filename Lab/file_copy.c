#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fp1, *fp2;
    char ch;
    int pos;

    if((fp1=fopen("File_1.txt","r"))== NULL){
        printf("\nDosya Acilamadi...");
        return -1;
    }
    else{
        printf("\nDosya kopyalanmak icin acildi....\n");
    }
    fp2=fopen("File_2.txt","w");
    fseek(fp1, 0L, SEEK_END); //Dosyanin sonu
    pos = ftell(fp1);
    fseek(fp1, 0L, SEEK_SET); //Dosyanin basi
    while(pos--)
    {
        ch = fgetc(fp1); //Dosyayi karakter karakter kopyala
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
        
}