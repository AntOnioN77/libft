#include<ctype.h>
#include<stdio.h>
int	ft_isalnum(int c);

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
	char letras[10] = {acento, a, s, z, llave, arroba, A, Q, Z, corchete};

	char barra = '/';
	char cero = '0';
	char uno = '1';
	char cinco = '5';
	char nueve = '9';
	char dos_puntos = ':';
	char numeros[6] = {barra, cero, uno, cinco, nueve, dos_puntos};

	i = 0;
	printf("\n           TEST_FT_ISALNUM\n");
	printf("Se esperan parejas de numeros, si alguno es cero y su pareja no, el programa no funciona.\n");
	while(i < 10)
	{
		printf("-----%c-----\n", letras[i]);
		printf("%d\n",isalnum(letras[i]));
		printf("%d\n",ft_isalnum(letras[i]));
		i++;
	}
	i = 0;
	while(i < 6)
	{
		printf("-----%c-----\n", numeros[i]);
		printf("%d\n",isalnum(numeros[i]));
		printf("%d\n",ft_isalnum(numeros[i]));
		i++;
	}

	return (0);	
}