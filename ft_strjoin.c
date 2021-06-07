#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newst;
	int		c;
	int		d;

	c = ft_strlen ((char *)s1) + ft_strlen ((char *)s2);
	newst = malloc(sizeof(char) * (c + 1));
	if (!newst)
		return (NULL);
	d = 0;
	while (d < ft_strlen((char *)s1))
	{
		newst[d] = s1[d];
		d++;
	}
	c = 0;
	while (c < ft_strlen((char *)s2))
	{
		newst[d] = s2[c];
		c++;
		d++;
	}
	newst[d] = '\0';
	return (newst);
}
