#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	while (num > 0)
	{
		((char *)dest)[num - 1] = ((char *)src)[num - 1];
		num--;
	}
	return (dest);
}
