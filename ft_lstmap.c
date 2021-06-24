#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst || !f)
		return (NULL);
	elem = ft_lstnew(f(lst->content));
	if (!elem)
		return (NULL);
	new_lst = elem;
	lst = lst->next;
	while (lst)
	{
		elem->next = ft_lstnew(f(lst->content));
		if (!elem->next)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		elem = elem->next;
		lst = lst->next;
	}
	return (new_lst);
}
