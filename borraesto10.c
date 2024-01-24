#include <unistd.h>

int main(void)
{
	char consigno = -32;
	unsigned char sinsigno;
	sinsigno = 0;
	while (consigno < sinsigno)
		sinsigno++;
	if (consigno == sinsigno)
		write(1, "S",1);
	return (0);
}

