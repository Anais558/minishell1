/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** dup
*/

#include "../include/shell.h"
#include "../lib/my/my.h"

char *my_strdup(char *str)
{
    int lengh = my_strlen(str) + 1;
    char *ana = malloc(lengh);

    if (ana == NULL)
        return (NULL);
    ana = my_strcpy(ana, str);
    ana[lengh - 1] = '\0';
    return (ana);
}

int my_strlen(char const *str)
{
    int g;

    for (g = 0; str[g] != '\0'; g++);
    return (g);
}

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}