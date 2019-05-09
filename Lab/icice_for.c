#include<stdio.h>

int main(void){
	int a[100];
	int i,j,t;
	for(i=0;i<100;i++){
		for(j=i+1;j<100;j++){
			if(a[i]>a[j])
			t = a[j], a[j]=a[i],a[i]=t;
		}
	}
	for(i=0;i<100;i++)
			printf("%d,",a[i]);
			return 0;
}
