/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:03:36 by antofern          #+#    #+#             */
/*   Updated: 2024/07/29 14:51:12 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *current;

	new = ft_lstnew((*f)(lst->content));
	if (new->next == NULL)
		return (NULL);
	current = new;

	while (lst->next != NULL)
	{
		lst = lst->next;
		current->next = ft_lstnew((*f)(lst->content));
		if (current->next == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		current = current->next;
	}
	return (new);
}