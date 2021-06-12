#include "libft.h"

static size_t	cntwords(const char *s, char c)
{
	size_t	d;
	size_t	words;
	size_t	flag;

	d = 0;
	words = 0;
	flag = 0;
	while (s[d])
	{
		if (s[d] == c)
			flag = 0;
		if (s[d] != c && flag == 0)
		{
			flag = 1;
			words++;
		}
		d++;
	}
	return (words);
}

static size_t	wrdsize(const char *s, char c)
{
	size_t	d;
	size_t	e;

	d = 0;
	e = 0;
	while (s[d] == c)
		d++;
	while (s[d] != c && s[d++])
		e++;
	return (e);
}

char	**ft_split(char const *s, char c)
{
	size_t		d;
	size_t		e;
	size_t		f;
	char		**split;

	if (!s)
		return (NULL);
	d = 0;
	e = 0;
	split = malloc(sizeof(char *) * (cntwords(s, c) + 1));
	if (!split)
		return (NULL);
	while (d < cntwords(s, c))
	{
		split[d] = malloc(sizeof(char) * (wrdsize(&s[e], c) + 1));
		if (split[d] == 0)
			return (NULL);
		f = 0;
		while (s[e] == c)
			e++;
		while (s[e] && s[e] != c)
			split[d][f++] = s[e++];
		split[d][f] = '\0';
		d++;
	}
	split[d] = NULL;
	return (split);
}
