# include <stdio.h>
# include <stdlib.h>

int main(void)
{
	size_t siz;
	siz = 18446744073709551615ULL;
	printf ("%lu\n",siz);
	printf ("%lu",(siz + 1));
}
