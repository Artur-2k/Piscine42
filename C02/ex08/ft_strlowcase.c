char *ft_strlowcase(char *str)
{
	int i = 0;
	while(str[i])
	{
		if('A' <= str[i] && str[i] <= 'Z')
			str[i] +=32;
		i++;
	}
	return str;
}
