//compilar con -lbsd

#include<bsd/string.h> 
#include<stdio.h>
#include "libft.h"

unsigned int ft_strlcat(char *dst, char *src, unsigned int size);
int main(void)
{
	int nreturn;
	char chain_a[10] = "hola";
	char chain_b[] = " mundo";
	char chain_c[10] = "hola";
	char chain_d[] = " mundo";

	nreturn = strlcat(chain_a, chain_b, 8);
	printf("ft original:%d|%s\n", nreturn, chain_a);
	nreturn = ft_strlcat(chain_c, chain_d, 8);
	printf("ft testeada:%d|%s\n", nreturn, chain_c);
	return(0);
}
