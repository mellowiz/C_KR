#include <stdio.h>

int a = 5;
int *p;

int main(void)
{
	p = &a;
	printf("Hello, world!\n");
	printf("\a%d\n", a);
	printf("Location of \"a\" : 0x%x\n", p);
	return 0;
}

