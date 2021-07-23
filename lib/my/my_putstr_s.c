/*
** EPITECH PROJECT, 2020
** print_S
** File description:
** print_S
*/
#include "my.h"

void my_putstr_S(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0') {
    if (str[i] < 32 || str[i] >= 127) {
    my_putchar('\\');
    my_putnbr_base(str[i], 8);
    }
    write(1, &str[i], 1);
    i++;
    }
}
