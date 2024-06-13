int ft_str_is_alpha(char *str)
{
	int i = 0;
	while (str[i])
	{
		if(('a' > str[i] || str[i] > 'z') && ('A' > str[i] || str[i] > 'Z'))
			return 0;
		i++;
	}
	return 1;	
}
