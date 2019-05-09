#include<stdio.h>

int main(){
    char *str="Merhaba Dunya";
    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            printf("%c",*str - 32);
        }
        else
            printf("%c",*str);
        str++;
    }
    return 0;
}