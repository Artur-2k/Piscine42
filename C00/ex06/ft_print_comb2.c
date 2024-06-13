#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n < 10)
	{	
		ft_putchar(n + 48);
	}
	if (n >= 10)
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
}

void ft_print_comb2(void)
{
	int arr[2];
	arr[0] = 0;
	while(arr[0] <= 98)
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= 99)
		{
			if (arr[0] < 10)  
				write(1, "0", 1); // 0
			ft_putnbr(arr[0]);        // 1st nb
			write(1, " ", 1);  	  // spc
			if (arr[1] < 10)
				write(1, "0", 1);
			ft_putnbr(arr[1]); 	  // 2nd nb
			if (arr[1] + arr[0] != 197)
				write(1, ", ", 2);// seperator
			arr[1]++;
		}
		arr[0]++;
	}
	write(1, "\n", 1); //newline at the end
}
