#include "libft.h"

void   	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*pnt;

	total_size = count * size;
	pnt = malloc(total_size);
	if (pnt == NULL)
		return (pnt);
	ft_bzero(pnt, total_size);
	return (pnt);

}
