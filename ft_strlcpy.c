#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	c;
	unsigned int	srcsize;

	if (!dest || !src)
		return (0);
	srcsize = 0;
	while (src[srcsize] != '\0')
	{
		srcsize++;
	}
	if (size > 0)
	{
		c = 0;
		while (c < (size - 1) && src[c] != '\0')
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (srcsize);
}
