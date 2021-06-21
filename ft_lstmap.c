#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;			//nova lista
	t_list	*new_elem;			//novo elemento criado por f

	if (!f || !del)				//se não há uma das funções, retorna nulo
		return (NULL);
	new_lst = NULL;				//inicializa a nova lista com primeiro elemento NULL
	while (lst)				//roda elemento por elemento
	{
		if (!(new_elem = ft_lstnew(f(lst->content))))	//content do elemento passar por f, ft_lstnew cria um elemento com 										//isso e manda pra new_elem, se não rolar, entrar aqui
		{
			ft_lstclear(&new_lst, del);			//ft_lstclear, chamando a função del, deleta new_lst, que não vai 										//poder ser populada
			return (NULL);					//acaba a função com NULL
		}
		ft_lstadd_back(&new_lst, new_elem);			//dando certo o malloc do ft_lstnew, o new elem criado é colocado no 										//fim de new_lst pela função addback
		lst = lst->next;
	}
	return (new_lst);
}