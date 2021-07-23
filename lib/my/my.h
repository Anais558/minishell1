/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void my_putchar(char c);
//void option(const char *str, va_list my_list);
void option(const char *str, va_list my_list, int i);
void my_putstr_S(char *str);
int my_put_nbr(int nb);
int my_put_nbr_pos(int nb);
int my_putstr(char const *str);
int my_putnbr_base(int nb, int n);
int my_putnbr_hexa(int nb);
int my_putnbr_HEXA(int nb);
