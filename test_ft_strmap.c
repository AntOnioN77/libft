#include "libft.h"
#include <stdio.h>

char	uperoddstr(unsigned int index, char c)
{
	if ((index % 2) != 0 && c > 96 && c < 123)
		return (c - 32);
	return (c);
}

int main()
{
	char str[] = "esta funcion deberia hacer mayusculas las posiciones impares (la primera posicion es cero)";
	char *strresult;
/*	strresult = ft_strmapi(str, NULL);
	if (strresult == NULL)
		printf("maneja un NULL en el lugar de f");*/
	strresult = ft_strmapi(str, uperoddstr);
	printf("%s\n", strresult);
	return (0);
}
