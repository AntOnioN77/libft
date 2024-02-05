#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);
int main(void)
{
	int n;

	n = atoi(NULL);
	printf("función original, con (NULL) retorna %d", n);
	printf("solo letras:%d\nletras_numero:%d\nsigno_numero_letras:%d\nvarios signos%d\n", atoi("dgdfgd"), atoi("dgdfgd4"), atoi("-5sdfg"), atoi("+-6"));
	printf("maximo int: %d\nminimo int:%d",ft_atoi("2147483647"), ft_atoi("-2147483648"));
}
//-2147483648
//2147483647