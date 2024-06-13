#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	int i = 0;
	char *dup = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	while(*src)
	{
		dup[i++] = *src;
		src++;
	}
	dup[i] = 0;
	return dup;
}
