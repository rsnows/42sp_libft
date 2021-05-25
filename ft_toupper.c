int		ft_toupper(int c)
{
	if (c > 60 && c < 123)
	{
		c-= 32;
	}
	return (c);
}
