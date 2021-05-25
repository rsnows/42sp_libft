int		ft_atoi(char *str)
{
	int c;
	int n;
	int sig;

	c = 0;
	n = 0;
	sig = 1;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t' || str[c] == '\v'
			|| str[c] == '\f' || str[c] == '\r')
	{
		c++;
	}
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sig *= (-1);
		c++;
	}
	while (str[c] && str[c] >= 48 && str[c] <= 57)
	{
		n = (n * 10) + str[c] - '0';
		c++;
	}
	return (sig * n);
}