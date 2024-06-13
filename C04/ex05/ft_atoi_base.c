int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

int check_base(char *base)
{
	if (ft_strlen(base) <= 1)
		return 1;
	char c[128] = { 0 };
	while(*base)
	{
       		if (*base == '+' || *base == '-' || c[(unsigned char)*base])
			 return 1;
	       	c[(unsigned char)*base] = 1;
		base++;
	}
	return 0;
}

int in_str(char c, char *str)
{
	while(*str)
	{
		if(*str == c)
			return 1;
		str++;
	}
	return 0;
}

int base_to_dec(char c, char *base)
{
	int i = 0;
	while(*base && c != *base)
	{
		i++;
		base++;
	}
	return i;
}
int ft_atoi_base(char *str, char *base)
{
	if (check_base(base))
		return 0;
	int sign = 1, result = 0, i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
                i++;
        while (str[i] == '+' || str[i] == '-')
        {
		if (str[i] == '-')
                	sign = -sign;
                i++;
        }
	while(str[i] && in_str(str[i], base))
	{
		 result = result * ft_strlen(base) + base_to_dec(str[i], base);
		 i++;
	}
	return (result * sign);
}
