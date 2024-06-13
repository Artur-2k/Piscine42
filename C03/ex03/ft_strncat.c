char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (*src && j < nb)
		dest[i++] = src[j++];
	dest[i] = 0;
	return dest;
}
