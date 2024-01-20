#include <stdio.h>
#include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
	char a[] = "/200";
	char b[] = "/0";
	char c[] = "Volvere";
	char d[] = "AD";

	printf("(%d--", ft_strncmp(a, b, 1));
	printf("%d\n)", strncmp(b, a, 1));

	printf("(%d--", ft_strncmp(c, a, 2));
	printf("%d\n)", strncmp(c, a, 2));

	printf("(%d--", ft_strncmp(b, a, 1));
	printf("%d\n)", strncmp(b, a, 1));

	printf("(%d--", ft_strncmp(b, d, 1));
	printf("%d\n)", strncmp(b, d, 1));
	printf("%d\n)", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("%d\n)", ft_strncmp("ayxbcdefgh", "abcdwxyz", 1));
	return (0);
}
