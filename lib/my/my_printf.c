/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** print
*/

#include "my.h"

void my_printf(const char *str, ...)
{
    va_list my_list;
    va_start(my_list, str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            i++;
            option(str, my_list, i);
        } else
            my_putchar(str[i]);
    }
    va_end(my_list);
}
