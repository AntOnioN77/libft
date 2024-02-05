#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char buff[20];
	memset(buff, 'A', 20);
	memcpy(buff, "Hola Lola", 10);
	printf("%s\n",ft_strrchr(buff, 'l'));

		memset(buff, 'A', 20);
	memcpy(buff, "Hola Lola", 10);
	if (NULL == ft_strrchr(buff, 'u'))
	printf("letra no encontrada da null. ok\n");

		memset(buff, 'A', 20);
	memcpy(buff, "Hola Lola", 10);
	if (NULL == ft_strrchr(buff, 0))
	printf("fin de cadena da null. fail\n");	
	printf("fin de cadena, se espera vacio:(%s)\n", ft_strrchr(buff, 0));

		memset(buff, 'A', 20);
	memcpy(buff, "Hola Lola", 10);
	printf("%s\n",ft_strrchr(buff, 'H'));

			memset(buff, 'A', 20);
	memcpy(buff, "", 10);
	printf("%s\n",ft_strrchr(buff, 'H'));
	
			memset(buff, 'A', 20);
	memcpy(buff, "", 10);
	printf("%s\n",ft_strrchr(buff, '\0'));
	return (0);
}
