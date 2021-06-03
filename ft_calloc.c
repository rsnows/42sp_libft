#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(size * nmemb);
	ft_bzero(p, size * nmemb);
	return (p);
}
