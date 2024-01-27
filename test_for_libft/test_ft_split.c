#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char const *s, char c);

int main(void)
{
	int i;

	//test1
	char *t1 = "adios!\nestoy de leaks\nhasta la coronilla";
	char **result = ft_split(t1,'\n');
	i = 0;
		while (result[i] != NULL)
	{
		printf("%s\n",result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);

	//test2
	printf("\n\ntest2\n");
	char *t2 = "\n\n\nadios!\nestoy de leaks\nhasta la coronilla";
	result = ft_split(t2,'\n');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n",result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);

		//test3
		printf("\n\ntest3\n");
	char *t3 = "\nadios!\nestoy de leaks\nhasta la coronilla";
	result = ft_split(t3,'\n');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n",result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);

		//test4
	printf("\n\ntest4\n");
	char *t4 = "adios!\nestoy de leaks\nhasta la coronilla\n";
	result = ft_split(t4,'\n');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n",result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);

	//test5
	printf("\n\ntest5\n");
	char *t5 = "adios!\nestoy de leaks\nhasta la coronilla\n\n\n\n\n\n\n\n\n";
	result = ft_split(t5,'\n');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n",result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);


	//test6
	printf("\n\ntest6\n");
	char *t6 = "adios!\nestoy de leaks\nhasta la coronill\na";
	result = ft_split(t6,'\n');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n",result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);


	//test7
	printf("\n\ntest7\n");
	char *t7 = "adios!\nestoy de leaks\nhasta la coronilla\n\n\n\n\n\n\n\n\n";
	result = ft_split(t7,'\n');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n",result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);

	//test8
	printf("\n\ntest8\n");
	char *t8 = "\n\n\n\n\n\n\n\n\n\n\n";
	result = ft_split(t8,'\n');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n",result[i]);
		i++;
	}
	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);


	return (0);
}