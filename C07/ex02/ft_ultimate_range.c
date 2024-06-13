#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *tab = (int*)malloc(sizeof(int) * (max-min));
	if (!tab)
		return -1;
	if (min >= max)
	{
		*range = NULL;
		return 0;
	}
	int i = 0;
	while(i < max-min)
	{
		tab[i] = min + i;
		i++;	
	}
	*range = tab;
	return max-min;
}
