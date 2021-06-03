#include "libft.h"

char			*ft_strdup(const char *s)
{
	int c;
	char *t;

	c = 0;
	while (s[c])
	{
		c++;
	}
	t = malloc(sizeof(char) * (c + 1));
	if (!t)
		return(NULL);
	c = 0;
	while(s[c])
	{
		t[c] = (char)s[c];
		c++;
	}
	t[c] = '\0';
	return(t);
}
