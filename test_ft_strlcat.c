//compilar con -lbsd

#include<bsd/string.h> 
#include<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);
//size_t ft_strlcat(char *dst, char *src, size_t size);
int main(void)
{
	int nreturn;
	char chain_a[10] = "hola";
	char chain_b[] = " mundo";
	char chain_c[10] = "hola";
	char chain_d[] = " mundo";
	nreturn = strlcat(chain_a, chain_b, 8);
	printf("ft original:%d|%s\n", nreturn, chain_a);
	nreturn = ft_strlcat(chain_c, chain_d, 8);
	printf("ft testeada:%d|%s\n", nreturn, chain_c);
	
	char chain_e[10] = "hola";
	char chain_f[] = " mundo";
	char chain_g[10] = "hola";
	char chain_h[] = " mundo";
	nreturn = strlcat(chain_e, chain_f, 0);
	printf("ft original:%d|%s\n", nreturn, chain_e);
	nreturn = ft_strlcat(chain_g, chain_h, 0);
	printf("ft testeada:%d|%s\n", nreturn, chain_g);

	char chain_i[14] = "";
	char chain_j[] = "municholo";
	char chain_k[14] = "";
	char chain_l[] = "municholo";
	nreturn = strlcat(chain_i, "lorem ipsum dolor sit amet", 15);
	printf("ft original:%d|%s\n", nreturn, chain_i);
	nreturn = ft_strlcat(chain_k,  "lorem ipsum dolor sit amet", 15);
	printf("ft testeada:%d|%s\n", nreturn, chain_k);

	return(0);
}
