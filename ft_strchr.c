#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	d;

	d = 0;
	while (s[d] != '\0')
	{
		if (s[d] == c)
			return (((char *)&s[d]));
		d++;
	}
	if (c == 0)
		return (((char *)&s[d]));
	return (NULL);
}
