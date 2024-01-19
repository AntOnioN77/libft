//compilar con -lbsd

#include<bsd/string.h> 
#include<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);
//size_t ft_strlcat(char *dst, char *src, size_t size);

int main(void)
{
	char *src = "abcdefghi";
	char dst1[100] = "pqrs";
	char dst2[100]= "pqrs";
	int ret1;
	int ret2;

	
	ret1 = strlcat(dst1, src, 10);
	ret2 = ft_strlcat(dst2, src, 10);
printf("ft testeada:%d|%s\n", ret1, dst1);
printf("ft testeada:%d|%s\n", ret2, dst2);
/*
	int r1;
	int r2;
char s1[4] = "";
char s2[4] = "";
r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
printf("ft testeada:%d|%s\n", r1, s1);
printf("ft testeada:%d|%s\n", r2, s2);
*/
}