#include<ctype.h>
#include<stdio.h>
int	ft_isdigit(int c);

int main(void)
{
	int i;
	char barra = '/';
	char cero = '0';
	char uno = '1';
	char cinco = '5';
	char nueve = '9';
	char dos_puntos = ':';
	char array[6] = {barra, cero, uno, cinco, nueve, dos_puntos};
	i = 0;

	printf("\n           TEST_FT_ISDIGIT\n");
	printf("Se esperan parejas de numeros, si alguno es cero y su pareja no, el programa no funciona.\n");
	while(i < 6)
	{
		printf("-----%c-----\n", array[i]);
		printf("%d\n",isdigit(array[i]));
		printf("%d\n",ft_isdigit(array[i]));
		i++;
	}
	
	return (0);	
}