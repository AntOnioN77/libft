#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *uc;
    uc = s;
    while (n-- > 0)
    {
        *uc = 0;
        uc++;
    }
    return ;
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)b;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (b);
}

int minmax(long st)
{
    if (st > INT_MIN && st < INT_MAX)
        return (1);
    return(0);
}

/*void    *ft_calloc(size_t count, size_t size)
{
    size_t  total_size;
    void    *pnt;

  //if (count == 0 || size == 0 )
 //{
    //count = 1;
    //size = 1;
    //pnt = malloc(0);
    //return(pnt);
    //return ((void *)malloc(2));
  //}
    if(count > 0 && size > (SIZE_MAX/count))
        return(NULL);
    total_size = count * size;
    pnt = malloc(total_size);
    if (!pnt)
        return(0);
    //if (pnt && total_size > 0)
        ft_bzero(pnt, total_size);
    return (pnt);
}*/

void *ft_calloc(size_t count, size_t size)
{
    size_t *pnt;

    if(count && size && count > (SIZE_MAX/size))
        return(NULL);
    if(!minmax(count) || !minmax(size))
        return (NULL);
    pnt = malloc(count * size);
    if (!pnt)
        return(NULL);
    //if (pnt && total_size > 0)
        ft_bzero(pnt, count * size);
    return (pnt);
}