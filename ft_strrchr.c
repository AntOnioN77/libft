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

char    *ft_strrchr(const char *str, int c)
{
	int	i;
	unsigned char uc;

	if (str == NULL)
		return (NULL);
	uc = (unsigned char)c;
	i = 0;
	while (str[i])
		i++;
	while (i >= 1 && str[i] != uc)
	{
		i--;
	}
	if (str[i] == uc)
		return ((char *)&str[i]);
	else
		return (NULL);
}
