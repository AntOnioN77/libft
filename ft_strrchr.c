/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:29:51 by antofern          #+#    #+#             */
/*   Updated: 2024/01/21 21:50:43 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	int	i;
	int uc;

	if (s == NULL)
		return (NULL);
	uc = (unsigned char)c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0 && s[i] != uc)
	{
		i--;
	}
	if (s[i] == uc)
		return ((char *)s + i);
	else
		return (NULL);
}
