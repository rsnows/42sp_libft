#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*oldst;
	char			*newst;
	unsigned int	c;

	oldst = (char *)s;
	newst = (char *)malloc(sizeof(char) * (ft_strlen(oldst) + 1));
	if (!newst)
		return (NULL);
	c = 0;
	while (c < (unsigned int)ft_strlen(oldst))
	{
		newst[c] = f(c, s[c]);
		c++;
	}
	newst[c] = '\0';
	return (newst);
}
