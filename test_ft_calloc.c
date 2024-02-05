#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
	unsigned char *buff1;
	buff1 = (unsigned char *)calloc(5,1);
	unsigned char *buff2;
	buff2 = (unsigned char *)ft_calloc(5,1);
	int i = 0;
	while (i < 8)
	{
		write(1, "o", 1);
		write(1, &buff1[i], 1);
		write(1, "t", 1);
		write(1, &buff2[i], 1);
		i++;
	}
	return 0;
}

