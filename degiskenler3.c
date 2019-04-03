#include <stdio.h>


int main(void) {
	int a=3, b=6;
	double c=1.5;
	printf("%d,%.2f \n",(int)((float)a*c),(float)(b*(int)c));
	return 0;
}
