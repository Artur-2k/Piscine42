unsigned int ft_strlen(char *str)
{
	while (str[i])
		i++;
	return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i = ft_strlen(dest);
	
	if (size <= 0 || size <= i)
		return (ft_strlen(dest) + ft_strlen(src));
	while (*src && i < size - 1)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(dest)+ ft_strlen(src));

}
