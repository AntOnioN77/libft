#include "libft.h"
#include <stdio.h>

void	uperoddstr(unsigned int index, char *c)
{
	if ((index % 2) != 0 && *c > 96 && *c < 123)
		*c = *c - 32;
}

int main()
{
	char str[] = "esta funcion deberia hacer mayusculas las posiciones impares (la primera posicion es cero)";
	ft_striteri(str, uperoddstr);
	printf("%s\n", str);
	return (0);
}