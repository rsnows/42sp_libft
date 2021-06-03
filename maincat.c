#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	int a;
	char b[8] = "rob";
	a = ft_strlcat(b, "erto", 6);
	printf("%d", a);
}