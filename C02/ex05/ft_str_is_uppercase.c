int ft_str_is_uppercase(char *str)
{
	while(*str)
	{
		if ('A' > *str || 'Z' < *str)
			return 0;
		str++;
	}
	return 1;
}
