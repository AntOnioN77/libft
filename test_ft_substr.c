#include "libft.h"
#include <stdio.h>

int main(void)
{
    char s1 [] = "sdfafs adf";
    char *s2;
    s2 = ft_substr(s1, 7, 3);
    printf("ft_ %s", s2);
    //*s1 = "sdfafs adf";
    //s2 = substr(s1, 7, 3);
    //printf("original %s", s2);
}