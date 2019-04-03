#include<stdio.h>
int main(void){
	char a[]= "BuTun kAraKterLer BuyuK yapilacak";
	int i=0;
	while(a[i]!='\0'){
		if(a[i]>='a' && a[i]<='z')
		a[i] += 'A'-'a';
		i++;
	
	}
	printf("%s\n",a);
	return 0;
}
