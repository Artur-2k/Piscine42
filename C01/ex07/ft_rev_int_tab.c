void ft_rev_int_tab(int *tab, int size)
{
	int temp, left = 0, right = size - 1;
	while(left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}
}
