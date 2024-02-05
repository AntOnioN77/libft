#include<string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);
int main()
{
char dest[30]; memset(dest, 0, 30);
char * src = (char *)"AAAAAAAAA";
dest[0] = 'B';

printf("%lu",strlcat(dest, src, -1));
memset(dest, 'C', 30);
//printf("%lu",ft_strlcat(dest, src, -1));
memset(dest, 'C', 15);

ft_strlcat(dest, src, 17); 
memset(dest, 0, 30);
ft_strlcat(dest, src, 1);
memset(dest, 0, 30);
memset(dest, '1', 10);

return (0);
}