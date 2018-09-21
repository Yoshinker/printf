#include "ft.h"

int     ft_cntpourcent(char *str)
{
    int count_p = 0;
    int index = 0;
    while (str[index])
    {
        if (str[index] == '%' && (str[index + 1] == 'd'
            || str[index + 1] == 'c' || str[index + 1] == 's'))
            count_p++;
        index++;
    }
    return count_p;
}
