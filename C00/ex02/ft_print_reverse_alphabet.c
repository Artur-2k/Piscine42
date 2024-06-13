#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char c = 'z';
    while ('a' <= c)
    {
        write(1, &c, 1);
        a++;
    }
}