#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);
int main(void)
{
	printf("solo letras:%d\nletras_numero:%d\nsigno_numero_letras:%d\nvarios signos%d\n", atoi("dgdfgd"), atoi("dgdfgd4"), atoi("-5sdfg"), atoi("+-6"));
	printf("---\nsolo letras:%d\nletras_numero:%d\nsigno_numero_letras:%d\nvarios signos%d\n", ft_atoi("dgdfgd"), ft_atoi("dgdfgd4"), ft_atoi("-5sdfg"), ft_atoi("+-6"));

	printf("maximo int: %d\nminimo int:%d",ft_atoi("2147483647"), ft_atoi("-2147483648"));
}
//-2147483648
//2147483647