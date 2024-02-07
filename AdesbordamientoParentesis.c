#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(void)
{
	if((SIZE_MAX + 2) > SIZE_MAX)
		printf("no desborda");
	else
		printf("Si desborda, el parentesis de la comparacion no puede contener numeros tan grandes");
	return (0);
}
