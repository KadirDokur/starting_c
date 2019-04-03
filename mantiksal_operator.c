#include <stdio.h>


int main(void) {
	int a = 0x5555, b = 0xFFFF;
	printf("%x,%x,%x,%x \n",a | b, a & b, a^b,~a);
	return 0;
}
