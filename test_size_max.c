#include <stdlib.h>
#include <limits.h>

#include <stdio.h>


int main(void)
{
	size_t  siz;
	int integer;
	integer = INT_MIN;
	siz = SIZE_MAX;
	printf("max size_t%lu", siz);
	printf("min int %d", integer);

return (0);
}
