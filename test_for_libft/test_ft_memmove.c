/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:43:41 by antofern          #+#    #+#             */
/*   Updated: 2024/01/09 22:20:19 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char string[6] = " Mundo";
	ft_memmove(&(string[2]), &(string[1]), 4);
	//ft_memmove(&(string[1]), &(string[2]), 4);
	printf("%s\n", string);
	if (!(string[6] == '\0'))
	{
		printf("ERROR string no termina en valor nulo\n");
	}
}