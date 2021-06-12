#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	c;
	size_t max;

	if (!s)
		return (NULL);
	max = (unsigned int)ft_strlen((char *)s);
	if (max > len)
		max = len;
	sub = malloc(sizeof(char) * max + 1);
	if (!sub)
		return (NULL);
	if (max < start)
	{
		sub[0] = '\0';
		return (sub);
	}
	c = 0;
	while (c < max)
	{
		sub[c] = s[start + c];
		c++;
	}
	sub[c] = '\0';
	return (sub);
}
