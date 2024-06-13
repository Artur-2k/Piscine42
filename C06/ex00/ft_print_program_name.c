#include <unistd.h>

void ft_putstr(char *str)
{
	for(int i = 0; str[i] != 0; i++)
		write(1, &str[i], 1);
}
int main(int ac, char **av)
{
	ft_putstr(av[0]);
	return 0;
}
