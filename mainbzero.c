#include "libft.h"

int	main(void)
{
	char data[20];
	
	ft_memset(data, 'A', 20);
	printf("%s\n", data);
	ft_bzero(data, 5);
	printf("%s\n", data);
}
