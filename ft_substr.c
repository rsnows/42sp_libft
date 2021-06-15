#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	cnt_src;
	size_t	cnt_dst;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen((char *)s) < len)
		len = (unsigned int)ft_strlen((char *)s);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	cnt_src = 0;
	cnt_dst = 0;
	while (s[cnt_src])
	{
		if (cnt_src >= start && cnt_dst < len)
		{
			sub[cnt_dst] = s[cnt_src];
			cnt_dst++;
		}
		cnt_src++;
	}
	sub[cnt_dst] = 0;
	return (sub);
}
