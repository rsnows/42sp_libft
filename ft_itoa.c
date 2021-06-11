#include "libft.h"

int	absolute_n(int n)
{
    if (n < 0)
		return (-n);
    return (n);
}

int size_count(int n)
{
	int c;
	
	c = 0;
	while (n > 9)
	{
		n = n / 10;
		c++;
	}
	c++;
	return (c);
}

char	*ft_itoa(int n)
{
	int n_size;
	char *new_st;

	n_size = size_count(n);
	new_st = (char *)malloc(sizeof(char) * (n_size + 1));
	new_st[n_size] = '\0';
	if (!new_st)
		return (NULL);
	if (n < 0)
		new_st[0] = '-';
	else if (n == 0)
		new_st[0] = '0';		
	while (n_size--)
	{
		new_st[n_size] = (absolute_n(n) % 10) + '\0';
		n = n / 10;
	}
	return (new_st);
}
