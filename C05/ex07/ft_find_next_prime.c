int ft_is_prime(int nb)
{
        if (nb <= 1)
                return 0;
        int i = 2;
        while (i * i < nb)
        {
                if ( nb % i == 0)
                        return 0;
                else
                        i++;
        }
        return 1;
}

int ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return 2;
	else
	{
		while(ft_is_prime(nb) == 0)
			nb++;
		return nb;
	}

}
