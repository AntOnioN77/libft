#include"libft.h"
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *destination;
	const unsigned char *source;
	
	destination = dest;
	source = src;
	while(n-- > 0)
	{
		*destination = *source;
		destination++;
		source++;
	}
	return (dest);
}