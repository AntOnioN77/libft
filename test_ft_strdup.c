#include <stdio.h>
char *ft_strdup(const char *s1);

int main(void)
{
    char *cadena = "adio";
    char *duplicado = ft_strdup(cadena);
    printf("%s\n", duplicado);
    return (0);
}