/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** cat str
*/
#include "../include/shell.h"
#include "../lib/my/my.h"

char *my_strcat(char *dest , char  const *src)
{
    int a;
    int j;

    a = 0;
    while (dest[a] != '\0') {
        a++;
    }
    for ( j = 0; src[j] != '\0';j++)
    {
        dest[a] = src[j];
        a++;
    }
    return (dest);
}