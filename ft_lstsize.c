/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:36:22 by antofern          #+#    #+#             */
/*   Updated: 2024/07/28 13:45:03 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	if (lst == NULL)
		return (0);
	i = 1;
	current = lst;
	while (current->next != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
