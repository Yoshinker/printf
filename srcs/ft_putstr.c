#include "ft.h"

void    ft_putstr(char *str)
{
    int count = 0;
    while (str[count])
    {
        ft_putchar(str[count]);
        count++;
    }
}
