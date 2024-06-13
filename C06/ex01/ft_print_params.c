#include <unistd.h>

void ft_putstr(char *str)
{
	for(int i = 0; str[i]; i++)
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int main(int ac, char **av)
{	
	for (int i = 1; i < ac; i++)
	{
		ft_putstr(av[i]);
	}
	return 0;
}
