#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
        char *s1 = "the cake is a lie !\0I'm hidden lol\r\n";
        char *s2 = "there is no stars in the sky";
        size_t size = strlen("the cake is a lie !\0I'm hidden lol\r\n");
        int i1 = strncmp(s1, s2, 1);
        int i2 = ft_strncmp(s1, s2, 1);
		printf("original %d %s\n", i1, s1);
		printf("testeado %d %s\n", i2, s1);
}
