/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:29:51 by antofern          #+#    #+#             */
/*   Updated: 2024/01/25 00:42:59 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	while (i >= 1 && (unsigned char)str[i] != (unsigned char)c)
	{
		i--;
	}
	if ((unsigned char)str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	else
		return (NULL);
}

/*
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	uc;

	if (str == NULL)
		return (NULL);
	uc = (unsigned char)c;
	i = 0;
	while (str[i])
		i++;
	while (i >= 1 && (unsigned char)str[i] != uc)
	{
		i--;
	}
	if (str[i] == uc)
		return ((char *)&str[i]);
	else
		return (NULL);
}
*/