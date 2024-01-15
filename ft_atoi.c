/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:31:32 by antofern          #+#    #+#             */
/*   Updated: 2024/01/15 10:43:05 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	total;
	int	sign;

	sign = 1;
	total = 0;
	if (*nptr == '-')
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
