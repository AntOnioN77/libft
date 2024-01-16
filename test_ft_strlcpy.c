/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:20:10 by antofern          #+#    #+#             */
/*   Updated: 2024/01/16 19:32:30 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	main()
{
    //char *cadena ="----------";
    //char *cadenab = "aaaaa";
    char cadenac[] ="----------";
    char cadenad[] = "aaaaa";
    size_t  result = strlcpy(cadenac, cadenad, 2);

    //printf("%zu %s\n", ft_strlcpy(cadena, cadenab, 1), cadena);
    printf("%zu %s\n", result, cadenac);

    return (0);
}
