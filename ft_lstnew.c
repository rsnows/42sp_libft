#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *n;
	
	n = malloc(sizeof(*n));
	if (!n)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}