#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	while(*s1 || *s2)
	{
		if(*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void ft_strswap(char **s1, char **s2)
{
	char *stemp = *s1;
	*s1 = *s2;
	*s2 = stemp;
}

void ft_sort_sarray(int size, char **sarray)
{
	int i, j, swapped = 0;
	for (i = 1; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 1; j < size - i ; j++)
		{
			if (ft_strcmp(sarray[j], sarray[j + 1]) > 0)
			{
				ft_strswap(&sarray[j], &sarray[j+1]);
				swapped = 1;
			}
		}
		if (swapped == 0) 
			break;
	}
}


void print_sorted_sarray(char **sarray, int size)
{
	ft_sort_sarray(size, sarray);
	for(int i = 1; i < size; i++)
	{
		while(**sarray)
		{
			write(1, &**sarray, 1);
			str++;
		}
	}
}

int main(int ac, char **av)
{
	print_sorted_sarray(av, ac);	
	return 0;
}

