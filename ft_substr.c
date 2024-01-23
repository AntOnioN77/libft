/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:56:42 by antofern          #+#    #+#             */
/*   Updated: 2024/01/22 16:43:46 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *buff;
	size_t i;
	size_t slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > (slen - start))
		len = slen -start;
	i = 0;
	buff = (char *)malloc(sizeof(char) * len + 1);
	if (buff == NULL)
	{
		return (NULL);
	}
	while (slen > (start + i) && i < len)
	{
		buff[i] = s[start + i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}