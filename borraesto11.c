#include <stdio.h>

int main()
{
	int integer;
	unsigned int un;
	integer = 2147483647;
	un = (unsigned int)integer;
	printf("%d\n", un);
}