#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t c;
	size_t d;

	c = 0;
	while (dst[c] && c < size)
		c++;
	d = 0;
	while (src[d] && (c + d + 1) < size)
	{
		dst[c + d] = src[d];
		d++;
	}
	if (c < size)
		dst[c + d] = '\0';
	return (c + ft_strlen((char *)src));
}
