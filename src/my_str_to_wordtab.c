/*
** EPITECH PROJECT, 2021
** my_str_to_wordtab.c
** File description:
** my_str_to_wordtab.c
*/

#include <stdlib.h>
#include "../include/shell.h"
#include "../lib/my/my.h"

char *my_strncpy(char *str, char *dest, int j, char c)
{
    int i = 0;

    while ((str[j] != c) && (str[j] != '\0')) {
        dest[i] = str[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int count(char *str, int j, char c)
{
    int i = 0;

    while ((str[j] != c) && (str[j] != '\0')) {
        j++;
        i++;}
    return (i);
}

int word_count(char *str, char c)
{
    int i = 0, j = 0;
    char cc = c;

    while (str[i] != '\0') {
        if ((cc == c) && (str[i] != c)) {
            j++; }
        cc = str[i];
        i++; }
    return (j);
}

char **my_str_to_wordtab(char *str, char c)
{
    int i = 0, j = 0;
    char cc = c;
    char **tab = malloc((word_count(str, c) + 1) * sizeof(tab));

    while (str[i] != '\0') {
        if ((cc == c) && (str[i] != c)) {
            tab[j] = malloc(count(str, i, c) + 1);
            my_strncpy(str, tab[j], i, c);
            tab[j][count(str, i, c)] = '\0';
            j++;}
        cc = str[i];
        i++;
    } tab[j] = NULL;
    return (tab);
}
