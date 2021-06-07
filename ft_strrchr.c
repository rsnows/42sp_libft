#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	d;

	d = ft_strlen ((char *)s);
	while (d > 0)
	{
		if (s[d - 1] == c)
			return (((char *)&s[d - 1]));
		d--;
	}
	if (c == 0)
		return (((char *)&s[d - 1]));
	return (NULL);
}
