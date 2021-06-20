#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*c;
	
	c = *lst;
	while (c)
	{
		if (c->next == NULL)
		{
			c->next = new;
		}
		c = c->next;
	}
}