int ft_str_is_lowercase(char *str)
{
	while(*str)
	{	
		if ('a' > *str || 'z' < *str)
			return 0;
		str++;
	}
	return 1;
}
