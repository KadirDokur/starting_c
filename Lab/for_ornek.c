#include<stdio.h>
#define n 100

int main(void){
	int a[n];
	int max=a[0],min=a[0],i;
	for(i=1;i<n;i++){
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
		}
		printf("%d\t%d\n",min,max);
		return 0;
	}

