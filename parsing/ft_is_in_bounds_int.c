/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_in_bounds_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:12:40 by antofern          #+#    #+#             */
/*   Updated: 2024/08/29 13:15:09 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
#include <limits.h>

/*Receives a pointer to the first numeric character of a string <char *digits>,
and TRUE or FALSE if it has or not has a sign preceding this character.
Returns TRUE if the number can be represented as an int type.*/
bool	ft_is_in_bounds_int(char *digits, bool has_sign)
{
	long	unbr;
	size_t	i;

	i = 0;
	while (ft_isdigit(digits[i]))
		i++;
	if (i < 1 || (i) != ft_strlen(digits))
		return (FALSE);
	if (ft_strlen(digits) > 10)
		return (FALSE);
	if (has_sign)
		digits--;
	unbr = ft_atol(digits);
	if (unbr > INT_MAX || unbr < INT_MIN)
		return (FALSE);
	return (TRUE);
}
