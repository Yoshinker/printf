#ifndef FT_H
# define FT_H

# include <stdarg.h>
# include <unistd.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);
void    ft_putfloat(float nb, int expo);
int     ft_cntpourcent(char *str);
int     ft_printf(char *str, ...);

#endif
