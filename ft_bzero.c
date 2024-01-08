#include"libft.h"
void ft_bzero(void *s, size_t n)
{
	unsigned char *uc;
	uc = s;
	while(n-- > 0)
	{
		*uc = 0;
		uc++;
	}
	return;
}