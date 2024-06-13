#include <stdlib.h>

int *ft_range(int min, int max)
{
	if(min >= max)
		return NULL;	
	int *tab = (int*)malloc(sizeof(int) * (max - min + 1));
	int i = 0;
	while(i < max - min)
		tab[i] = min + (i++);
	return tab;
}
