#include<ctype.h>
#include<stdio.h>
int	ft_isascii(int c);

int main(void)
{
	int i;
	int menos_uno = -1;
	int cero = 0;
	int cincuenta =50;
	int cientoveintisiete = 127;
	int cientoveintiocho = 128;

	int array[5] = {menos_uno, cero, cincuenta, cientoveintisiete, cientoveintiocho};
	i = 0;

	printf("\n           TEST_FT_ISASCII\n");
	printf("Se esperan parejas de numeros, si alguno es cero y su pareja no, el programa no funciona.\n");
	while(i < 5)
	{
		printf("-----( %d )-----\n", array[i]);
		printf("%d\n",isascii(array[i]));
		printf("%d\n",ft_isascii(array[i]));
		i++;
	}
	
	return (0);	
}