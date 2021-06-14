#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	c;
	size_t	max;

	if (!s)
		return (NULL);
	max = (size_t)ft_strlen((char *)s) - start;
	if (len < max)
		max = len;
	sub = malloc(sizeof(char) * max + 1);
	if (!sub)
		return (NULL);

	c = 0;
	while (c < max)
	{
		sub[c] = s[start + c];
		c++;
	}
	sub[c] = '\0';
	return (sub);
}

int main(void)
{
	char *a;
	a = ft_substr("n7M", 1, 8);
	printf("%s", a);
}