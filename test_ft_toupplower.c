#include <stdio.h>
int ft_toupper(int c);
int ft_tolower(int c);

int main(void)
{
	printf("%c",(char)ft_tolower('@'));
	printf("%c",(char)ft_tolower('A'));
	printf("%c",(char)ft_tolower('B'));
	printf("%c",(char)ft_tolower('Z'));
	printf("%c\n",(char)ft_tolower('['));

	printf("%c",(char)ft_toupper('`'));
	printf("%c",(char)ft_toupper('a'));
	printf("%c",(char)ft_toupper('w'));
	printf("%c",(char)ft_toupper('z'));
	printf("%c",(char)ft_toupper('{'));
	return (1);
}