#include <stdio.h>
#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
char *big = "abcdefghijklmnop";
char *little = "abcdef";
size_t size = 6;
int i1 = strncmp(big, little, size);
int i2 = ft_strncmp(big, little, size);
printf("original:%d -- ft_: %d", i1, i2);
}
