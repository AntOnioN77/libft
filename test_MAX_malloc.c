#include<unistd.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
	void *pnt;

	pnt = malloc(INT_MAX);
	free(pnt);
	return(0);
}
