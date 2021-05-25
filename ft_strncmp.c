int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	c = 0;
	while ((s1[c] || s2[c]) && (c < n))
	{
		if (s1[c] < s2[c])
		{
			return (-1);
		}
		else if (s1[c] > s2[c])
		{
			return (1);
		}
		c++;
	}
	return (0);
}