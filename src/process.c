/*
** EPITECH PROJECT, 2021
** process.c
** File description:
** process
*/

#include "../include/shell.h"
#include "../lib/my/my.h"

void process(pid_t pid, int ptr, shell *mysh, char **env)
{
    pid = fork();
    if (pid == -1)
        exit(84);
    if (pid == 0)
            cat_path(mysh, env);
    else {
        wait(&ptr);
        if (ptr == 139)
    my_printf("%s: Command not found.\n", mysh->buffer);
        else
        wait(&ptr);
    }
}

int cat_path(shell *mysh, char **env)
{
    int x = 0;
    char *str = my_strcat(mysh->path[x], "/");
    mysh->path[x] = my_strcat(str, mysh->cmd[0]);
    while (access(mysh->path[x], F_OK) != 0) {
        x++;
        mysh->path[x] = my_strcat(my_strcat(mysh->path[x], "/"), mysh->cmd[0]);
    }
    execve(mysh->path[x], mysh->cmd, env);
}