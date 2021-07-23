/*
** EPITECH PROJECT, 2021
** input.c
** File description:
** input
*/

#include "../include/shell.h"
#include "../lib/my/my.h"

char *for_cd(shell *mysh, char **env)
{
    char *directory;

    for (int i = 0; env[i] != NULL; i++)
    {
        directory = getenv("HOME");
        chdir(directory);
    }
    return (directory);
}

void verify_cd(shell *mysh, char **env, int ac)
{
    char *direct;

    if (mysh->cmd[1] == NULL)
        direct = for_cd(mysh, env);
    else {
        if (chdir(mysh->cmd[1]) == -1)
        my_printf("%s: No such file or directory.\n", mysh->cmd[1]);
        else NULL;
    }
}