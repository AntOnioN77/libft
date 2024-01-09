/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:14:01 by antofern          #+#    #+#             */
/*   Updated: 2024/01/09 22:28:24 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	memcpy_backwards(void *dest, const void *src, size_t n)
{
	int i;
	unsigned char	*destination;
	const unsigned char	*source;

	i = 1;
	source = src;
	destination = dest + (n - 1);
	while (destination >= (unsigned char *)dest)
	{
		*destination = source[n - i];
		destination--;
		i++;
	}

}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*source;

	destination = dest;
	source = src;
	while (n-- > 0)
	{
		*destination = *source;
		destination++;
		source++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		memcpy_backwards(dest, src, n);
	}
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
