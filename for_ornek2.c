#include <stdio.h>
int main(void){
	int a[100]={1,2,3,4};
	int i;
	for(i=99;i>0;i--){
		if(a[i]!=0)
		break;
	}
	printf("%d\n",i);
	return 0;
}
