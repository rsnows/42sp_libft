#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	c;

	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	if ((unsigned int)ft_strlen((char *)s) < start)
	{
		sub[0] = '\0';
		return (sub);
	}
	c = 0;
	while (c < len)
	{
		sub[c] = s[start + c];
		c++;
	}
	sub[c] = '\0';
	return (sub);
}
