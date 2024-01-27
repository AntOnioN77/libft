#include<ctype.h>
#include<stdio.h>
int	ft_isalpha(int c);

int main(void)
{
	int i;
	char acento = '`';
	char a = 'a';
	char s = 's';
	char z = 'z';
	char llave = '{';
	char arroba = '@';
	char A = 'A';
	char Q = 'Q';
	char Z = 'Z';
	char corchete = '[';

	char array[10] = {acento, a, s, z, llave, arroba, A, Q, Z, corchete};
	i = 0;
	printf("\n           TEST_FT_ISALPHA\n");
	printf("Se esperan parejas de numeros, si alguno es cero y su pareja no, el programa no funciona.\n");
	while(i < 10)
	{
		printf("-----%c-----\n", array[i]);
		printf("%d\n",isalpha(array[i]));
		printf("%d\n",ft_isalpha(array[i]));
		i++;
	}
	
	return (0);	
}