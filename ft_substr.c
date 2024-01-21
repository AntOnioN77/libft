#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *buff;
	size_t i;

	i = 0;
	buff = (char *)malloc(len + 1);
	if (buff == NULL)
	{
		free(buff);
		return (NULL);
	}
	while (s[start + i] && i < len)
	{
		buff[i] = s[start + i];
		i++;
	}
	buff[i] = '\n';
	return (buff);
}