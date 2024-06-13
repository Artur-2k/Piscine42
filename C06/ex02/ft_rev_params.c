#include <unistd.h>

void ft_putstr(char *str)
{
	for(int i = 0; str[i]; i++)
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int main(int ac, char **av)
{	
	while(--ac)
		ft_putstr(av[ac]);		
	return 0;
}
