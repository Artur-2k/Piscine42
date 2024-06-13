char *ft_strupcase(char *str)
{
	int i= 0;
	while(str[i])
	{
		if('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return str;
}
