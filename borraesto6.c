#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);
int main(void)
{
	char dest[30];
	memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	printf("%lu %s\n",ft_strlcat(dest, src, 0), dest);

	char dest2[30];
	memset(dest2, 0, 30);
	char * src2 = (char *)"AAAAAAAAA";
	printf("L16%s\n", dest2);
	dest2[0] = 'B';
	printf("L17%s\n", dest2);
	printf("%lu %s\n",strlcat(dest2, src2, 0), dest2);

}
