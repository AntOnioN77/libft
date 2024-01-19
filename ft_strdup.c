/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:36:14 by antofern          #+#    #+#             */
/*   Updated: 2024/01/17 11:38:31 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	char	*new;
	int		i;

	i = 0;
	slen = ft_strlen(s1) + 1;
	new = (char *)malloc(sizeof(char) * slen);
	if (new == NULL)
		return (new);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}