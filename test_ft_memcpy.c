#include<stdio.h>
#include <string.h>
#include "../libft.h"

int main(void)
{
    printf("si compila");
    char source[] = "Que mirah bobo";
    char destination[15];
    //printf("comprobar retorno (frase celebre): %s\n",(char *)ft_memcpy(NULL, NULL, 15));
    //printf("comprobar copia (misma frase): %s\n",destination);
    printf("memcpy original: %s", (char *)ft_memcpy(destination, source, 15));

}
