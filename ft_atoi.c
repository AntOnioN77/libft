/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:31:32 by antofern          #+#    #+#             */
/*   Updated: 2024/01/31 10:01:10 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		total;
	int		sign;

	sign = 1;
	total = 0;
	while (*nptr == '\n' || *nptr == '\t' || *nptr == '\r'
		|| *nptr == '\v' || *nptr == '\f' || *nptr == ' ')
		nptr++;
	if (*nptr == '-' && (ft_isdigit(nptr[1]) > 0))
	{
		sign = sign * (-1);
		nptr++;
	}
	if (*nptr == '+')
		nptr++;
	while (*nptr <= '9' && *nptr >= '0')
	{
		total = (*nptr - '0') + (total * 10);
		nptr++;
	}
	return (total * sign);
}
