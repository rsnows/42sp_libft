#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			c;
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	c = 0;
	while ((c < n) && (st1[c] == st2[c]))
	{
		c++;
	}
	if (c == n)
		return (0);
	else
		return (st1[c] - st2[c]);
}
