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

int main(void)
{
    t_list	*start;
    t_list	*new_node;
    char	*values = "abcdefgh";
    char	*pnt;
    int		i;

    start = NULL;

    for (i = 0; i < 8; i++)
    {
        pnt = (char *)malloc(sizeof(char));
        *pnt = values[i];
        new_node = ft_lstnew(pnt);
        ft_lstadd_back(&start, new_node);
    }

    // Verificaciones
    t_list *current = start;
    for (i = 7; i >= 0; i--)
    {
        if (*(char *)(current->content) != values[7 - i])
        {
            printf("Error en las funciones lst*.\n");
            ft_lstclear(&start, char_free);
            return 1;
        }
		printf("\n----%c---\n", *((char *)current->content));
        current = current->next;
    }
	printf("\n----%c---\n", *((char *)start->next->next->next->content));
    printf("Las funciones lst* funcionan correctamente.\n");

    // Liberar memoria
    ft_lstclear(&start, char_free);
    return 0;
}