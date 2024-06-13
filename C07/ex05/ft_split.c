#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i;
	for (i = 0; str[i]; i++)
		;
	return i;
}

int ft_strncmp(char *str, char *charset, int n)
{
	while((*str || *charset) && n > 0)
	{
		if(*str != *charset)
			return 1;
		str++;
		charset++;	
		n--;	
	}
	return 0;
}

char *ft_strndup(char *str, int w_lenght)
{
	int i = 0;
	char *dup = (char*)malloc(sizeof(char) * (w_lenght + 1));
	if (dup == NULL)
		return NULL;
	while (i < w_lenght)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return dup;
}

int count_words(char *str, char *charset) 
{
    int count = 0;
    int charset_len = ft_strlen(charset), str_len = ft_strlen(str);
    int i = 0;
    
    while (i < str_len)
    {
        while (ft_strncmp(&str[i], charset, charset_len) == 0)
        	i += charset_len;
        if (str[i] == 0)
            break;
        count++;
        while (str[i] && ft_strncmp(&str[i], charset, charset_len) != 0) 
            i++;
    }
    return count;
}

char **ft_split(char *str, char *charset)
{
	char **split_str = (char**)malloc(sizeof(char*) * (count_words(str,charset) + 1));
	if (split_str == NULL)
		return NULL;
	int charset_len = ft_strlen(charset), str_len = ft_strlen(str);
	int i = 0, w = 0;
	int w_start, w_lenght;
			
	while (i < str_len)
	{
		while (ft_strncmp(&str[i], charset, charset_len) == 0)
       			i += charset_len;	
		if (str[i] == 0)
			break;	
	        w_start = i;
	        while (ft_strncmp(&str[i], charset, charset_len) != 0 && str[i] != 0)
	        	i++;
	        w_lenght = i - w_start;
	        split_str[w++] = ft_strndup(&str[w_start], w_lenght);
	}
	split_str[w] = NULL;
	return split_str;
}

int main() {
    char str[] = ",,,,ola,,mundo,,maluco,,,,,";
    char charset[] = ",,";
    char **result = ft_split(str, charset);
    
    printf("%d\n", count_words(str,charset));
    printf("Split result:\n");
    for (int i = 0; result[i] != NULL; i++)
    	printf("%s\n", result[i]);
    //free blablabla;
    return 0;
}
