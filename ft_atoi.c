int ft_atoi(const char *nptr)
{
	int c;
	int n;
	int sig;

	c = 0;
	n = 0;
	sig = 1;
	while (nptr[c] == ' ' || nptr[c] == '\n' || nptr[c] == '\t' || nptr[c] == '\v'
			|| nptr[c] == '\f' || nptr[c] == '\r')
		c++;
	if (nptr[c] == '-' || nptr[c] == '+')
	{
		if (nptr[c] == '-')
			sig *= -1;
		c++;
	}
	while (nptr[c] && nptr[c] >= 48 && nptr[c] <= 57)
	{
		n = (n * 10) + nptr[c] - 48;
		c++;
	}
	return (sig * n);
}