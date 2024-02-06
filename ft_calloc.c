/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:47:59 by antofern          #+#    #+#             */
/*   Updated: 2024/01/31 10:43:13 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*pnt;

	if(count > 0 && size > (SIZE_MAX/count + 1))
		return(NULL);
	total_size = count * size;
	pnt = malloc(total_size);
	if (pnt)
		ft_bzero(pnt, total_size);
	return (pnt);
}
