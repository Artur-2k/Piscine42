#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	for (i = 0; str[i]; i++)
		;
	return i;
}

int ft_tlen(int size, char **strs, char *sep)
{
	int tlen = 1;
	for (int i = 0; i < size; i++)
		tlen += ft_strlen(strs[i]);
	tlen = tlen + ((size - 1) * ft_strlen(sep));
	return tlen;
}

char *ft_strcat(char *dest, char* src)
{
	int i = ft_strlen(dest);
	while(*src)
	{
		dest[i++] = *src;
		src++;
	}
	dest[i] = 0;
	return dest;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int tlen = ft_tlen(size, strs, sep);
	char *fstr = (char*)malloc(sizeof(char) * tlen);
	if (!fstr || size == 0)
	{
		fstr = NULL;
		return fstr;
	}
	for (int i = 0; i < size; i++)
	{
		fstr = ft_strcat(fstr, strs[i]);
		if ( i < size - 1)
			fstr = ft_strcat(fstr, sep);
	}
	return fstr;
}
