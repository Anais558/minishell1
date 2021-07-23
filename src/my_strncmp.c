/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** comp
*/

#include "../include/shell.h"
#include "../lib/my/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a;

    for (a = 0; n > 0 && s1[a] != '\0'; a++, n--) {
        if (s1[a] != s2[a])
            return (-1);
    }
    return (0);
}