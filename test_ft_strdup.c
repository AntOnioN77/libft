#include <stdio.h>
#include "libft.h"


int main(void)
{
    char *cadena = "adio";
    char *duplicado = ft_strdup(cadena);
    printf("%s\n", duplicado);
    return (0);
}