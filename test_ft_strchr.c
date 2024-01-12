//compilar con -lbsd

#include<bsd/string.h> 
#include<stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c);
int main(void)
{
	char *coincidencia;
	char chain_a[10] = "hola";
	char chain_c[10] = "hola";

	coincidencia = strchr(chain_a, 'w');
	printf("ft original:%s\n", coincidencia);
	coincidencia = ft_strchr(chain_c, 'l');
	printf("ft testeada:%s\n", coincidencia);
	return(0);
}