int ft_atoi(char *str)
{
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
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
	       	i++;
	}
	return (result * sign);
}
