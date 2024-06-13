char *ft_strncpy(char *dest, char *src, insigned int n)
{
	int i = 0;
	while (src[i] && i < n)
		dest[i] = src[i++];
	for ( ; i < n; i++)
		dest[i] = 0;
	return dest;
}
