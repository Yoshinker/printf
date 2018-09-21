#include "ft.h"

void    ft_putnbr(int nb)
{
    // Only positivs numbers
    if (nb >= 10)
        ft_putnbr(nb/10);
    ft_putchar('0' + nb%10);
}
