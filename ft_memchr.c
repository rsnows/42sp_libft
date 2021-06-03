#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*st;
	unsigned char	ch;

	st = (unsigned char *)s;
	ch = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		if (st[count] == ch)
			return (&st[count]);
		count++;
	}
	return (NULL);
}
