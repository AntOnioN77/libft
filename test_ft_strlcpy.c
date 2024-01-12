/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antofern <antofern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:20:10 by antofern          #+#    #+#             */
/*   Updated: 2024/01/10 17:09:26 by antofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	main()
{
    char cadena[] ="cadena poyos";
    
    ft_strlcpy(&cadena[2],&cadena[10], 3);
    
    printf("%s", cadena);

    return 0;
}
