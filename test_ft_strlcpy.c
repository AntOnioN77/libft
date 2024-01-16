/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:20:10 by antofern          #+#    #+#             */
/*   Updated: 2024/01/16 16:51:22 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	main()
{
    char cadena[10] ="----------";
    char cadenab[] = "aaaaa";
    ft_strlcpy(cadena, cadenab, 0);
    
    printf("%s", cadena);

    return (0);
}
