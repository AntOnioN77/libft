#include <limits.h>
#include <stdint.h>
#include "libft.h"
#include "stdio.h"

int	main(void)
{
	size_t n = (size_t) INT_MAX;
	printf("INT_MAX %lu\n", n);
	n = n * n;
	printf("INT_MAX * INT_MAX %lu\n", n);

	n = (size_t) SIZE_MAX;
	printf("SIZE_MAX %lu\n", n);

	return (0);
}
