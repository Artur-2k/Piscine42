char *ft_strstr(char *str, char *to_find)
{
	int i = 0, j = 0;
	while(str[i])
	{	
		j = 0;
		while(str[i] && to_find[j])
		{
			if (str[i] == to_find[j])
			{
				j++;
				i++;
			}
			else
				break ;
			if (to_find[j] == 0)
				return &str[i - j];
		}
		i++;
	}
	return 0;
}
