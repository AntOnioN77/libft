//compilar con -lbsd

//#include<bsd/string.h> 
#include <string.h>

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
	
	char chain_e[0x100] = "hola";
	char chain_f[] = " mundo";
	char chain_g[0x100] = "hola";
	char chain_h[] = " mundo";
	nreturn = strlcat(chain_e, chain_f, 0);
	printf("ft original:%d|%s\n", nreturn, chain_e);
	nreturn = ft_strlcat(chain_g, chain_h, 0);
	printf("ft testeada:%d|%s\n", nreturn, chain_g);

	char chain_i[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	chain_i[0] = 'n';
	chain_i[1] = 'n';
	chain_i[2] = 'n';
	chain_i[3] = 'n';
	chain_i[4] = '\0';
	//char chain_j[] = "municholo";
	char chain_k[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	chain_k[0] = 'n';
	chain_k[1] = 'n';
	chain_k[2] = 'n';
	chain_k[3] = 'n';
	chain_k[4] = '\0';
	//char chain_l[] = "municholo";
	nreturn = strlcat(chain_i, "lorem ipsum", 16);
	printf("ft original:%d|%s\n", nreturn, chain_i);
	nreturn = ft_strlcat(chain_k,  "lorem ipsum", 16);
	if (chain_k[9] == '\0' )
		printf("printNull 9");
	if (chain_k[10] == '\0' )
		printf("printNull 10");
	if (chain_k[11] == '\0' )
		printf("printNull 11");
	printf("ft testeada:%d|%s\n", nreturn, chain_k);

	return(0);
}
