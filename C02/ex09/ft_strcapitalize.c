int is_aplhanumeric(char c)
{
	if  (('0' <= c && c <= '9') || ('a'<= c && c <= 'z') || ('A' <= c && c <= 'Z')) // a-z, A-Z, 0-9
		return 1; // is alpha numeric
	else
		return 0; // is not alphanuneric
}

int is_aplha(char c)
{
	if  (('a'<= c && c <= 'z') || ('A' <= c && c <= 'Z')) // a-z, A-Z
		return 1; // is alpha 
	else
		return 0; // is not alpha
}

int is_lower(char c)
{
		if  ('a' <= c && c <= 'z') // a-z
			return 1; // is lower
		else
			return 0; // is not lower
}

int is_upper(char c)
{
		if  ('A' <= c && c <= 'Z') // A-Z
			return 1; // is upper
		else
			return 0; // is not upper
}

char *ft_strcapitalize(char *str)
{
	int i = 0;
	if ('a' <= str[i] && str[i] <= 'z') // capitalizes first if needed
		str[i] -= 32;
	i++;
	while(str[i]){
		if (is_aplha(str[i]))  
		{
			if (is_lower(str[i]) && !(is_aplhanumeric(str[i - 1])))   // capitalizes when the char before isnt alphanumeric
				str[i] -= 32;
			if (is_upper(str[i]) && is_aplhanumeric(str[i -1])) // lowers if its upper and char before is alphanumeric
				str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return str;
}
