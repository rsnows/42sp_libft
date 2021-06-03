#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char *newst;
	char *str1;
	char *str2;
	int c;
	int d;
	
	str1 = (char *)s1;
	str2 = (char *)s2;
	c = ft_strlen(str1) + ft_strlen(str2);
	newst = malloc(sizeof(char) * c + 1);
	if (!newst)
		return(NULL);
	d = 0;
	while(d < ft_strlen(str1))
	{
		newst[d] = s1[d];
		d++;
	}
	c = 0;
	while (c < ft_strlen(str2))
	{
		newst[d] = s2[c];
		c++;
		d++;
	}
	newst[d] = '\0';
	return (newst);
}