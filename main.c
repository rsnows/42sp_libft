#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char data[20];
	
	ft_memset(data, '\0', 20);
	printf("%s\n", data);
	ft_memset(data, 'R', 10);
	printf("%s\n", data);
	
}