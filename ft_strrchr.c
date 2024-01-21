/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:29:51 by antofern          #+#    #+#             */
/*   Updated: 2024/01/21 14:55:05 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	while (i >= 0 && s[i] != c)
	{
		i--;
	}
	if (s[i] == c)
		return ((char *)s + i);
	else
		return (NULL);
}
