/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:35:50 by antofern          #+#    #+#             */
/*   Updated: 2024/01/14 14:46:00 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*memory_section;
	unsigned char	compar;

	*memory_section = (unsigned char *)s;
	compar = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (compar == memory_section[i])
			return ((void *)&memory_section[i]);
		i++;
	}
	return (NULL);
}