int ft_iterative_power(int nb, int power)
{
	int result = 1;
	if (nb == 0)
	{
		if(power == 0)
			return 1;
		else
			return 0;
	}
	if (power == 0)
		return 1;
	while(power--)
		result = result * nb;
	return result;
}
