/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:41:16 by antofern          #+#    #+#             */
/*   Updated: 2024/01/27 13:47:09 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//verificar includes innecesarios
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static char	*ft_strndup(const char *src, int n)
{
	char	*new_string;
	int		length;
	int		i;

	length = ft_strlen(src);
	new_string = (char *)malloc((length + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (i <= length && i < n)
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

/*ft_count_substr() retorna el numero de substrings, eludiendo substrings vacias*/
static int	ft_count_substr(const char *str, char token)
{
	int	count;
	int check;

	count = 0;

	while (*str != '\0')
	{
		check = 0;
		if (*str != token)
			check = 1;
		while (*str != token && *str != '\0')
			str++;
		while (*str == token && *str != '\0')
			str++;
		if (check == 1)
			count++;
	}
	return (count);
}

static int	ft_to_chop(char **array_substrings, int substring_count,
char const *s, char c)
{
	int		i;
	char	*next_str;

	i = -1;
	next_str = (char *)s;
	while (++i < substring_count)
	{
		while (c == *s)
		{
			s++;
			next_str++;
		}
		while (*next_str != '\0' && c != *next_str)
			next_str++;
		array_substrings[i] = ft_strndup(s, next_str - s);
		if (array_substrings[i] == NULL)
		{
			while (i >= 0)
			{
				free(array_substrings[i--]);
			}
			return (1);
		}
		s = next_str;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		substring_count;
	char	**array_substrings;

	substring_count = ft_count_substr(s, c);
	array_substrings = (char **)malloc((substring_count + 1) * sizeof(char *));
	if (array_substrings == NULL)
		return (NULL);
	array_substrings[substring_count] = NULL;
	if (ft_to_chop(array_substrings, substring_count, s, c) == 1)
	{
		free(array_substrings);
	}
	return (array_substrings);
}
