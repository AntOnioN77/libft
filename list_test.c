/*void ft_lstdelone(t_list *lst, void (*del)(void
*));
ft_lstadd_back(t_list **lst, t_list *new);
*ft_lstlast(t_list *lst);
int ft_lstsize(t_list *lst);
 
 *;
*/

#include "libft.h"
#include <stdio.h>

void char_free(void * pnt)
{
    free(pnt);
}

void putchar_custom(void *c)
{
	ft_putchar_fd(*(char *)c, 1);
}

void	*pnt_toupper(void *c)
{
	char *new;

	new = malloc(sizeof(char));
	if (*(char *)c > 96 && *(char *)c < 123)
		*new = *(char *)c - 32;
	return (new);
}

int main(void)
{
    t_list	*start;
    t_list	*new_node;
    t_list	*map;
	char	*values = "abcdefghi";
    char	*pnt;
    int		i;


    start = NULL;
	i = 0;
    while ( i < 9)
    {
        pnt = (char *)malloc(sizeof(char));
        *pnt = values[i];
        new_node = ft_lstnew(pnt);
        ft_lstadd_back(&start, new_node);
		i++;
    }

    t_list *current = start;
	i = 7;
    while (i >= 0)
    {
        if (*(char *)(current->content) != values[7 - i])
        {
            printf("Error en las funciones lst*.\n");
            ft_lstclear(&start, char_free);
            return 1;
        }
		printf("\n----%c---\n", *((char *)current->content));
        current = current->next;
		i--;
    }
	printf("esperado -d- (char *)start->next->next->next->content\n----%c---\n", *((char *)start->next->next->next->content));
    printf("Las funciones lst* funcionan correctamente.\n");
    map = ft_lstmap(start, pnt_toupper, char_free);
	ft_lstiter(start, putchar_custom);
	ft_lstiter(map, putchar_custom);
	ft_lstclear(&map, char_free);
	ft_lstclear(&start, char_free);


    return 0;
}