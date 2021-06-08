#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	d;

	d = ft_strlen ((char *)s);
	if (c == 0)
		return ((char *)s + d);
	while (d > 0)
	{
		if (s[d - 1] == (c % 256))
			return (((char *)&s[d - 1]));
		d--;
	}
	return (NULL);
}
