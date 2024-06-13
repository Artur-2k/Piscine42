int ft_str_is_printable(char *str)
{
	while(*str)
	{
		if (32 > *str || 126 < *str)
		       return 0;	
		str++;
	}
	return 1;
}
