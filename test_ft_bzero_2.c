#include<stdio.h>
void ft_bzero(void *s, size_t n);

int main(void)
{
    int num;
    num = 2147483647;
    printf("esperado 2147... %d\n", num);
    ft_bzero(&num, 1);
    printf("esperado 2147483392, resultado: %d\n", num);
    ft_bzero(&num, 4);
    printf("esperado 0, resultado: %d\n", num);
}