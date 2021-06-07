#include "libft.h"

static int cntwords(const char *s, char c)
{
	int	d;
	int	words;
	
	d = 0;
	words = 0;
	while (s[d])
	{
		while (s[d] == c)
			d++;
		if (s[d] != '\0')
			words++;
		while (s[d] && s[d] != c)
			d++;
	}
	return (words);
}


char	**ft_split(char const *s, char c)
{
	int		d;
	int		e;
	int		f;
	char	**split;
	
	d = 0;
	f = 0;
	
	split = (char **)malloc(sizeof(char *) * (cntwords(s, c) + 1));
	if (!split)
		return (NULL);
	while (s[d])
	{
		while (s[d] == c)
			d++;
		e = d;
		while (s[d] && s[d] != c)
			d++;
		if (d > e)
		{
			split[f] = (char *)ft_substr(s, e, (d - e));
			f++;
		}
	}
	split[f] = '\0';
	return (split);
}