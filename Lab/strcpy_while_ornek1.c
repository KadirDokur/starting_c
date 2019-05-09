#include<stdio.h>
#include<string.h>
int main(void){
	char a[]="Merhaba Dunya";
	char b[]="Hoscakal";
	int i=0;
	printf("%s\n",b);
	strcpy(b,a);
	printf("%s\n",b);
	return 0;
}
