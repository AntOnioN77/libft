#include<stdio.h>
#include <string.h>
#include "libft.h"


/*La función original da un error de compilacion, al pasar NULL en uno de 
los valores. PEro compila
Retorna  (NULL) si ambos: dest y src son NULL.
Si solo uno de los valores es NULL causara un segv.
*/
int main(void)
{
    char source[] = "Que mirah bobo";
    char destination[15];
    
    //printf("memcpy original: %s", (char *)memcpy(destination, source, 15));

    printf("memcpy original: %s", (char *)memcpy(source, NULL, 15));
    //printf("memcpy original: %s", (char *)ft_memcpy(source, NULL, 15));

    //printf("memcpy original: %s", (char *)memcpy(NULL, 15));
    //printf("memcpy original: %s", (char *)ft_memcpy(NULL, 15));

    //printf("memcpy original: %s", (char *)memcpy(NULL, NULL, 15));
    //printf("memcpy original: %s", (char *)ft_memcpy(NULL, NULL, 15));

}
