#include "ft.h"

int     ft_printf(char *str, ...)
{
    va_list list;
    int i, count, index;
    i = 0;
    count = ft_cntpourcent(str);
    va_start(list, str);
    index = 0;
    while (str[index])
    {
        if (str[index] == '%')
        {
            if (str[index + 1] == 'd' || str[index + 1] == 'c'
                || str[index + 1] == 's')
            {
                i++;
                if (i > count)
                {
                    ft_putstr("\nError: missing arguments.\n");
                    return 1;
                }
                switch (str[index + 1])
                {
                    case 'd':
                        // Number
                        ft_putnbr(va_arg(list, int));
                        index++;
                        break;
                    case 'c':
                        // Character
                        ft_putchar(va_arg(list, int));
                        index++;
                        break;
                    case 's':
                        // String
                        ft_putstr(va_arg(list, char *));
                        index++;
                        break;
                }
            }
            else
                ft_putchar(str[index]);
        }
        else
            ft_putchar(str[index]);
        index++;
    }
    va_end(list);
    return (count);
}
