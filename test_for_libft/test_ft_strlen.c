#include <stdio.h>
size_t	ft_strlen(const char *s);

int main(void)
{
	char	*str = "holo Lalo";
	printf("longitud esperado 9, resultado %ld\n",ft_strlen(str));
}