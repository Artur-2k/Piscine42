unsigned int ft_strlen(char *str)
{
    unsigned int i = 0;
    while (str[i])
        i++;
    return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    if (size == 0)
        return ft_strlen(src);
    int i = 0;
    while (src[i] != 0 && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (ft_strlen(src));
}