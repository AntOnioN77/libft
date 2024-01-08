#include"libft.h"
void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *memory;

	memory = s;
	while(n-- > 0)
	{ 
		*memory = (unsigned char)c;
		memory++;
	}
	return (s);
}