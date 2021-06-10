#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return (NULL);
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
