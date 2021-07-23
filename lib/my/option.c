/*
** EPITECH PROJECT, 2021
** option.c
** File description:
** option
*/
#include "my.h"

void option(const char *str, va_list my_list, int i)
{
    if (str[i] == 'c')
        my_putchar(va_arg(my_list, int));
    if (str[i] == 's')
        my_putstr(va_arg(my_list, char *));
    if (str[i] == 'S')
        my_putstr_S(va_arg(my_list, char *));
    if (str[i] == 'd' || str[i] == 'i')
        my_put_nbr(va_arg(my_list, int));
    if (str[i] == '%')
        my_putchar(va_arg(my_list, int));
    if (str[i] == 'x')
        my_putnbr_hexa(va_arg(my_list, int));
    if (str[i] == 'X')
        my_putnbr_HEXA(va_arg(my_list, int));
    if (str[i] == 'o')
        my_putnbr_base(va_arg(my_list, int), 8);
    if (str[i] == 'b')
        my_putnbr_base(va_arg(my_list, int), 2);
    if (str[i] == 'u')
        my_put_nbr_pos(va_arg(my_list, unsigned int));
}