#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	char a[] = "skffag";
	//printf("%c -- ", *(unsigned char*)ft_memchr(a, 102, 2));
	//printf("%c\n", *(unsigned char*)memchr(a, 102, 2));

	printf("%c -- ", *(unsigned char*)ft_memchr(a, 102, 3));
	printf("%c\n", *(unsigned char*)memchr(a, 102, 3));

	printf("%c -- ", *(unsigned char*)ft_memchr(a, 8888, 2));
	printf("%c\n", *(unsigned char*)memchr(a, 8888, 2));
}