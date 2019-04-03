#include<stdio.h>
void main(){
    char string[]="KUCULT BENI YEGENIM\n";
    for(int i=0;string[i]!='\0';i++){
        if(string[i]>='A' && string[i]<='Z')
            string[i]+=32;
    }
    printf("%s",string);
}
