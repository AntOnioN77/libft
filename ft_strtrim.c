/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:34:31 by antofern          #+#    #+#             */
/*   Updated: 2024/02/01 15:51:02 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static size_t	cal_trimedlen(char const *s1, char const *set)
{
	int		i;
	size_t	length;
	size_t	subst;

	i = 0;
	while (s1[i] && (ft_strchr(set, s1[i]) != NULL))
		i++;
	subst = i;
	while (s1[i])
		i++;
	length = i;
	while (s1[i] && (ft_strchr(set, s1[i]) != NULL))
	{
		i--;
		subst++;
	}
	length = length - subst;
	return (length);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	i = start;
	while (s1[i])
		i++;
	end = i;
	if (i != start)
		i--;
	while (end > 0 && (ft_strchr(set, s1[i]) != NULL))
		end--;
	result = ft_substr(s1, start, end);
	return (result);
}
