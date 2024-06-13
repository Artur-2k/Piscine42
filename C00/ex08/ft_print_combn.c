#include <unistd.h>

int valid_combination(char *comb, int n) {
    int digit_count[10] = {0};

    for (int i = 0; i < n; i++)
    {
        int digit = comb[i] - '0';
       
        if (digit_count[digit] || digit > 9)
            return 0; // Dígitos repetidos ou estamos num processo de carry

        digit_count[digit] = 1;
    }

    return 1; // Dígitos distintos
}

void ft_print_combn(int n) {
    if (n > 0 && n < 10) {
        char combination[n + 1];
        int size = n;

        for (int i = 0; i < size; i++)
            combination[i] = i + '0';
        combination[size] = '\0';
       
        while (combination[0] <= '9' + 1 - n)
        {
            if (valid_combination(combination, size))
            {
                write(1, combination, size);
                if (combination[0] < '9' + 1 - n)
                    write(1, ", ", 2);
                else
                    write(1, "\n", 1);
            }
           
            int i = size - 1;
            while (i >= 0 && (combination[i] - '0') >= 9)
                i--;
            combination[i]++;
            for (int j = i + 1; j < size; j++)
                combination[j] = combination[j - 1] + 1;
        }
    }
}
