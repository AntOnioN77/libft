#include<stdio.h>
void    *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char source[] = "Que mirah bobo";
    char destination[15];
    printf("comprobar retorno (frase celebre): %s\n",(char *)ft_memcpy(destination, source, 15));
    printf("comprobar copia (misma frase): %s\n",destination);
}