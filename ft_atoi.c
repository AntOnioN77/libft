/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:31:32 by antofern          #+#    #+#             */
/*   Updated: 2024/01/21 21:46:19 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	total;
	int	sign;
	char *npt = (char *)nptr;

	sign = 1;
	total = 0;
	while (*npt == '\n' || *npt == '\t' || *npt == '\r' || *npt == '\v' || *npt == '\f' || *npt == ' ')
		npt++;
	if (*npt == '-' && (ft_isdigit(npt[1]) > 0))
	{
		sign = sign * (-1);
		npt++;
	}
	if (*npt == '+')
		npt++;
	while (*npt <= '9' && *npt >= '0')
	{
		total = (*npt - '0') + (total * 10);
		npt++;
	}
	return (total * sign);
}
