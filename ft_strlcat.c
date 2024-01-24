#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	while (dst[i] && dstsize > i)
	{
		i++;
	}
	while ((i + j + 1) < dstsize && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if ((i + j) < dstsize)
		dst[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}
