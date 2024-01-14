#include <stdio.h>
#include <string.h>

int    ft_memcmp(const void *s1, const void *s2, size_t n);
int main(void)
{
    char *stringa = "sdfasf";
    char *stringb = "sdfatt";
    //char *stringc = "jghfdd";
    //char *stringc = "";

    printf("%d -- ", ft_memcmp(stringa, stringa, 6));
     printf("%d\n", memcmp(stringa, stringa, 6));
    printf("%d -- ", ft_memcmp(stringa, stringb, 6));
    printf("%d\n", memcmp(stringa, stringb, 6));
    printf("%d -- ", ft_memcmp(stringb, stringa, 6));
    printf("%d\n", memcmp(stringb, stringa, 6));
}