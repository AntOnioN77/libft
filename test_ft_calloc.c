#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <limits.h>

int main(void)
{
	unsigned char *buff1;
	buff1 = (unsigned char *)ft_calloc(INT_MAX, INT_MAX);
//	unsigned char *buff2;
//	buff2 = (unsigned char *)ft_calloc(SIZE_MAX,1);
//		write(1, &buff2[i], 1);
	free(buff1);
//	free(buff2);
	return 0;
}

