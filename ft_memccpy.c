#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	count = 0;
	while (count < n)
	{
		p_dest[count] = p_src[count];
		if (p_src[count] == c)
			return (dest + count + 1);
		count++;
	}
	return (NULL);
}
