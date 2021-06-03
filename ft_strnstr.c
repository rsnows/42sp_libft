#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c;
	size_t	d;

	if (*little == '\0')
		return ((char *)big);
	c = 0;
	while (c < len && big[c])
	{
		d = 0;
		while ((c + d < len) && big[c + d] == little[d])
		{
			d++;
			if (little[d] == '\0')
				return ((char *)&big[c]);
		}
		c++;
	}
	return (NULL);
}
