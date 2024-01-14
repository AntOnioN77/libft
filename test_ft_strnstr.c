#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int main(void)
{
    char *s1 = "qwertyqurtt";
    char *s2 = "qwerty";
    char *s3 = "sdafhushdfiojewwerqwerqwetyrerq";
    //printf("%s -- ",ft_strnstr(s1, s2, 11));
    //printf("%s\n", strnstr(s1, s2, 11));

    printf("%s -- ",ft_strnstr(s1, s2, 11));
    printf("%s\n", strnstr(s1, s2, 11));

    printf("%s -- ",ft_strnstr(s3, s2, 4));
    printf("%s\n", strnstr(s3, s2, 4));
    return (0);
}
