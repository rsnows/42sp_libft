#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c;
	char	*str1;
	char	*s2;

	str1 = (char *)s1;
	if (!str1 || !set)
		return (NULL);
	while (*str1 && ft_strchr(set, *str1))
		str1++;
	c = ft_strlen(str1);
	while (c && ft_strchr(set, str1[c]))
		c--;
	s2 = ft_substr((char *)str1, 0, c + 1);
	return (s2);
}
