#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL)
		tmp = new;
	else
	{
	tmp = ft_lstlast(*lst);
	tmp->next = new;	
	}
}
