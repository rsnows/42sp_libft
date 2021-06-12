#include "libft.h"

int	neg_test(int n)
{
    if (n < 0)
		return (1);
	else
		return (0);
}

int	size_count(unsigned int n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	unsigned int	n_size;
	unsigned int	is_negative;
	char			*new_st;
	unsigned int	nbr;

	is_negative = neg_test(n);
	if (is_negative == 1)
		nbr = -n;
	else
		nbr = n;
	n_size = size_count(nbr);
	new_st = (char *)malloc(n_size + is_negative + 1);
	if (!new_st)
		return (NULL);
	if (is_negative == 1)
		new_st[0] = '-';
	new_st[n_size + is_negative] = '\0';
	while (n_size > 0)
	{
		new_st[n_size - 1 + is_negative] = (nbr % 10) + '0';
		nbr = nbr / 10;
		n_size--;
	}
	return (new_st);
}
