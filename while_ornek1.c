#include<stdio.h>
int main(void){
	char a[]="Merhaba1 Dunya";
	char b[]="Hoscakal";
	int i=0;
	printf("%s\n",b);
	while(a[i]!='\0'&&b[i]!='\0'){
		b[i]=a[i];
		i++;
	}
	printf("%s\n",b);
	return 0;
}
