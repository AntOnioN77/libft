/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:25:10 by antofern          #+#    #+#             */
/*   Updated: 2024/08/29 13:14:57 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

int		ft_has_duplicates(int n_words, char **array_words);
bool	ft_is_in_bounds_int(char *digits, bool has_sign);
#endif