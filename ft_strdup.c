/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:36:14 by antofern          #+#    #+#             */
/*   Updated: 2024/02/09 00:24:06 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	char	*new;
	int		i;

	i = 0;
	slen = ft_strlen(s1) + 1;
	new = (char *)ft_calloc(slen, sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
