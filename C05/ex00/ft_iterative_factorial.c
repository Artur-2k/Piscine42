int ft_iterative_factorial(int nb)
{
	if(nb < 0)
		return 0;
	if(nb == 0)
		return 1;
	int result = 1;
	while(nb != 1)
	{	
		result = result * nb;
		nb--;
	}
	return result;
}
