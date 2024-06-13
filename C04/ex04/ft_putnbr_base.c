#include <unistd.h>

int ft_check_doubles(char *base)
{
	int i = 0, j;
	while(base[i])
	{
		j = i + 1;
		while(base[j])
		{
			if (base[i] == base[j])
				return 1;
			else
				j++;
		}
		i++;
	}
	return 0;
}

int check_base(char *base)
{
	int i = 0;
	if (ft_check_doubles(base) == 1)
		return 1;
	 while(base[i])
	 {
		 if (base[i] == '+' || base[i] == '-')
			 return 1;
		 else
			 i++;
	 }
	 if (i == 1)
		 return 1;
	 return 0;
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr_base(int nbr, char *base)
{
	long n = nbr;
	int lbase = ft_strlen(base); 
	if (check_base(base))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n < lbase)
		ft_putchar(base[n]);
	else
	{
		ft_putnbr_base(n / lbase, base);
		ft_putnbr_base(n % lbase, base);
	}
}
