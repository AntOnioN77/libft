/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:44:23 by antofern          #+#    #+#             */
/*   Updated: 2024/01/09 17:55:17 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <ctype.h>
int	ft_isprint(int c);

int main(void)
{
	int i;
	int espacio = ' ';
	int fuera = 31;
	int cientoveintisiete = 127;
	int cientoveintiseis = 126;

	int array[4] = {espacio, fuera, cientoveintiseis, cientoveintisiete};
	i = 0;

	printf("\n           TEST_FT_ISASCII\n");
	printf("Se esperan parejas de numeros, si alguno es cero y su pareja no, el programa no funciona.\n");
	while(i < 4)
	{
		printf("-----( %d )-----\n", array[i]);
		printf("%d\n",isprint(array[i]));
		printf("%d\n",ft_isprint(array[i]));
		i++;
	}
	
	return (0);	
}
