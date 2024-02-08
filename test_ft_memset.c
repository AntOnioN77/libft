#include<stdio.h>
void *ft_memset(void *s, int c, size_t n);

int main(void)
{
int integer;
int num;

integer = 1;
num = 255; // (0xFF) maximo valor de un byte sin signo. (ft_memset utiliza unsigned char internamente)
ft_memset(&integer, num, 4); //en este compilador int tiene 32 bits, 32/8 = 4 bytes
printf("esperado: -1\nresultado:%d\n\n", integer);//si el int representa en complemento a dos 1111 1111 1111 1111 1111 1111 1111 1111 es -1

num = 0; 
ft_memset(&integer, num, 1); 
printf("esperado: -256\nresultado:%d\n\n", integer); //memset modifica el bit menos significativo ahora integer
//queda a 1111 1111 1111 1111 1111 1111 0000 0000 = -256
}

/*Este es uno de los puntos en c que puede resultar confuso al principio, pero el estándar C
sólo especifica un rango mínimo para los tipos enteros que se garantiza que son compatibles. int
está garantizado que puede contener de -32767 a 32767, lo que requiere 16 bits. En ese caso, int
es de 2 bytes. Sin embargo, las implementaciones son libres de ir más allá de ese mínimo, como se
verá que muchos compiladores modernos hacen int 32 bits (que también significa 4 bytes de forma
bastante generalizada).
La razón por la que tu libro dice 2 bytes es muy probablemente porque es viejo. En una época,
esto era la norma. En general, siempre se debe utilizar el sizeof operador si necesitas saber
cuántos bytes tiene la plataforma que estás utilizando.

Para solucionar esto, C99 añadió nuevos tipos en los que se puede pedir explícitamente un entero
de cierto tamaño, por ejemplo int16_t o int32_t . Antes de eso, no había una forma universal de
obtener un entero de un ancho específico (aunque la mayoría de las plataformas proporcionaban
tipos similares en función de la plataforma).



Fuente: https://www.iteramos.com/pregunta/120934/el-tamano-de-c-quotintquot-es-de-2-o-4-bytes*/