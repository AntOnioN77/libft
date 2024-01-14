/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:26:39 by antofern          #+#    #+#             */
/*   Updated: 2024/01/14 18:27:07 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		v;

	i = 0;
	if (needle[0] == '\0')
		return (haystack[0]);
	while (i < len && (haystack[i]))
	{
		j == i;
		v == 0;
		while (haystack[j] == needle[v])
		{
			j++;
			v++;
			if (needle[v] == '\n')
				return (i);
		}
		i++;
	}
	return (NULL);
}
