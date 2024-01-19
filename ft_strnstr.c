/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:26:39 by antofern          #+#    #+#             */
/*   Updated: 2024/01/15 09:33:08 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	v;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && (haystack[i]))
	{
		j = i;
		v = 0;
		while (haystack[j] == needle[v] && haystack[j] && needle[v])
		{
			j++;
			v++;
		}
		if (needle[v] == '\0')
			return ((char *)&(haystack[i]));
		i++;
	}
	return (NULL);
}