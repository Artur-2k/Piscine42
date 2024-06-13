int ft_sqrt(int nb)
{
	int i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return i;
		else
			i++;
	}
	return 0;
}
