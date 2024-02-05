#include "libft.h"
#include <stdio.h>


int	main(void)
{
	char	s1[] = "Hola Lola";
	char	s2[] = "pio pio";
	//char *original;
	char *testeada;	
	testeada = ft_strjoin(s1,s2);
	//original = strjoin(s1,s2);
	printf("%s\n", testeada);
	return (0);
}
