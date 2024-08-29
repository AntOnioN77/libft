/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_duplicattes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:23:50 by antofern          #+#    #+#             */
/*   Updated: 2024/08/28 11:27:24 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Busca valores duplicados, si existen retorna 1, en caso contrario retorna 0*/
int ft_has_duplicates(int n_words, char **array_words)
{
	int	i;
	int	j;

	i = 1;
	while (i < n_words)
	{
		j = i + 1;
		while (j < n_words)
		{
			if (ft_strcmp(array_words[i], array_words[j]) == 0)
			{
				return 1;
			}
			j++;
		}
		i++;
	}
	return 0;
}