/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:29:54 by antofern          #+#    #+#             */
/*   Updated: 2024/01/14 14:36:41 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		remain;
	int		tlenght;
	char	*startsrc;
	char	*startdst;

	*startsrc = (char *)src;
	*startdst = dst;
	remain = size;
	while (*dst != '\0')
	{
		dst++;
		remain--;
	}
	tlenght = dst - startdst;
	while (remain-- > 1 && (*src))
	{
		*dst = *src;
		dst ++;
		src++;
	}
	while (*src)
		src++;
	*dst = '\0';
	tlenght = tlenght + (src - startsrc);
	return (tlenght);
}
