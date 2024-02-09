#include <stdio.h>
#include "libft.h"

void uppercase(unsigned int n, char *str)
{
	if (n > 0 && (n % 2) != 0)
		*str = ft_toupper(*str);
}

int main(void)
{
	char str[10] = "Hola lola";
	ft_striteri(str, uppercase);
	printf("%s", str);
}