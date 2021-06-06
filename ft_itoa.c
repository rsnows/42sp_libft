#include "libft.h"

char	*ft_itoa(int n)
{
	char	*newst;

	newst = (char *)malloc(sizeof(char) * 2);
	if (!newst)
		return (NULL);
	if (n == -2147483648)
		return (newst = strdup("-2147483648"));
	else if (n < 0)
	{
		newst[0] = '-';
		newst[1] = '\0';
		newst = ft_strjoin(newst, ft_itoa(-n));
	}
	else if (n >= 10)
		newst = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		newst[0] = n + '0';
		newst[1] = '\0';
	}
	return (newst);
}
