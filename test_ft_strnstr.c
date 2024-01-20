//compilar con -lbsd

#include <stdio.h>
#include <string.h> 


char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int main(void)
{/*
    char *s1 = "qwertyqurtt";
    char *s2 = "qwerty";
    char *s3 = "sdafhushdfiojewwerqwerqwetyrerq";
    //printf("%s -- ",ft_strnstr(s1, s2, 11));
    //printf("%s\n", strnstr(s1, s2, 11));

    printf("%s -- ",ft_strnstr(s1, s2, 11));
    printf("%s\n", strnstr(s1, s2, 11));

    char *sv = ft_strnstr(s3, s2, 22);
    if (sv == NULL)
        printf("ft_ nuloo\n");
    else
        printf("%s -- ", sv);
    char *sx = strnstr(s3, s2, 22);
    if (sx == NULL)
        printf("original nuloo\n");
    else
        printf("%s\n", sx);*/
    //printf("%s -- ",ft_strnstr(s3, s2, 4));
    //printf("%s\n", strnstr(s3, s2, 4));

        char *s1 = "lorem ipsum dolor sit amet";
        char *s2 = "ipsum";
        //size_t max = strlen(s2);
        char *i1 = strnstr(s1, s2, 11);
        char *i2 = ft_strnstr(s1, s2, 11);
    if (i1 == NULL)
        printf("orig nuloo\n");
    else
        printf("original : %s\n", i1);
    if (i2 == NULL)
        printf("ft_ nuloo\n");
    else
        printf("ft_ : %s", i2);
   // printf("--%s--",ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
    return (0);
}
