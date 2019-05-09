#include <stdio.h>


int main(void) {
	int a = 21, b = 19, c = -21;
	printf("%d,%d \n",((a>>3)<<3),((b>>2)<<2));
	printf("%d,%d \n",a&~7, b& 0xFFFFFFFC);
	printf("%d,%d \n", c>>31, ((unsigned int)c>>31));
	return 0;
}
