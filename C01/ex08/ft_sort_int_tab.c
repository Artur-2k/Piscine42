void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
	int swapped;
	for(int i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for(int j = 0; j < size - 1 - i; j++)
		{
			if (tab[j] > tab[j+1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
