/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:43:02 by antofern          #+#    #+#             */
/*   Updated: 2024/01/14 14:39:57 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	char a[] = "skffag";
	//printf("%c -- ", *(unsigned char*)ft_memchr(a, 102, 2));
	//printf("%c\n", *(unsigned char*)memchr(a, 102, 2));

	printf("%c -- ", *(unsigned char*)ft_memchr(a, 102, 3));
	printf("%c\n", *(unsigned char*)memchr(a, 102, 3));

	printf("%c -- ", *(unsigned char*)ft_memchr(a, 8888, 2));
	printf("%c\n", *(unsigned char*)memchr(a, 8888, 2));
}