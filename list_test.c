/*void ft_lstdelone(t_list *lst, void (*del)(void
*));
ft_lstadd_back(t_list **lst, t_list *new);
*ft_lstlast(t_list *lst);
int ft_lstsize(t_list *lst);
 
 *;
*/
#include "libft.h"

void char_free(void * pnt)
{
	free(pnt);
}

int main(void)
{
	t_list	*start;
	t_list	*l;
	t_list	*l_b;
	char	*pnt_a;
	char	*pnt_b;

	pnt_a = (char *)malloc(sizeof(char));
	pnt_b = (char *)malloc(sizeof(char));
	*pnt_a = 'a';
	*pnt_b = 'b';

	l = ft_lstnew(pnt_a);
	start = NULL;
	ft_lstadd_front(&start, l);
	l_b = ft_lstnew(pnt_b);

	ft_lstadd_front(start, l_b);

}
