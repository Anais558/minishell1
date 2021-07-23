/*
** EPITECH PROJECT, 2021
** path.c
** File description:
** path
*/

#include "../include/shell.h"
#include "../lib/my/my.h"

void get_path(shell *mysh, char **env)
{
    char *line;

    for (int z = 0; env[z] != NULL; z++) {
        if (env[z][0] == 'P' && env[z][1] == 'A'
        && env[z][2] == 'T' && env[z][3] == 'H') {
            line = my_strdup(env[z]);
        }
    }
    mysh->path = my_str_to_wordtab(line, ':');
}