#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *result;
	size_t i;
	size_t length;

	length = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i,s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}



