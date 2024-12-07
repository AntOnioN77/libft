/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ring_get_level.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:56:45 by antofern          #+#    #+#             */
/*   Updated: 2024/12/07 18:25:39 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ring.h"

/*retorna el valor contenido en el nºesimo elemento de la lista, considerando que el nº0 es ring->buff[ring->head]*/
int ring_get_level(const t_ring *ring, t_level level) 
{
	int index;

	while (level >= ring->fill)
		level = level - ring->fill;
	while (level <= -(ring->fill))
		level = level + ring->fill;
	if (level < 0)
	{
		level = ring->fill + level;
	}
	
	index = (level + ring->head) % ring->slots ;
	
	return (ring->buff[index]);
}
