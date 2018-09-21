#include "ft.h"

void    ft_putfloat(float nb, int expo)
{
    int nb_integer = (int)nb;
    ft_putnbr(nb_integer);
    int i = 0;
    nb -= (float)nb_integer;
    ft_putchar('.');
    while (i < expo)
    {
        nb *= 10;
        i++;
    }
    ft_putnbr((int)nb);
}
