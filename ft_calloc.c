/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:47:59 by antofern          #+#    #+#             */
/*   Updated: 2024/01/27 13:48:01 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*pnt;

	total_size = count * size;
	pnt = malloc(total_size);
	if (pnt == NULL)
		return (NULL);
	ft_bzero(pnt, total_size);
	return (pnt);
}
