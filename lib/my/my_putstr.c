/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** displays one-by-one the characters of a string
*/
#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    int h;
    h = 0;

    while (str[h] != '\0'){
        my_putchar(str[h]);
        h++;
    }
}
