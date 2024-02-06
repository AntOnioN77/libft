#include<unistd.h>
#include<stdlib.h>
#include<limits.h>
#include<stdio.h>

/*maxUlong: 18446744073709551615
maxInt: 2147483647*/
int main()
{


	unsigned long maxUlong = ULONG_MAX;
//	unsigned long maxInt = INT_MAX;
//	printf("maxUlong: %lu\n", maxUlong);
//	printf("maxInt: %lu\n", maxInt);

	void *pnt;

//	pnt = malloc(2147483647);//funca
//	pnt = malloc(2147483648);//funca
//	pnt = malloc(maxInt + 1);//funca

	pnt = malloc(maxUlong);

//	pnt = malloc((unsigned long)INT_MAX);//funca
//	pnt = malloc((unsigned long)SIZE_MAX);//excede el maximo soportado
//	pnt = malloc(INT_MAX + 1);//excede el maximo soportado
//	pnt = malloc((unsigned long)INT_MAX + 1);//funca
	free(pnt);
	return(0);
}
