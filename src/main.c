/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "../include/shell.h"
#include "../lib/my/my.h"

int main(int ac, char **av, char **env)
{
    char *str = NULL;
    pid_t pid;
    int i;
    int ptr;
    size_t size = 0;
    shell *mysh = malloc(sizeof(mysh));

    while (1)
    {
        my_printf ("\033[33;09m[MY_SHELL]$> \033[00m");
        if (getline(&str, &size, stdin) == -1)
            return (0);
        if (str[0] != '\n' && str[0] != '\t')
        {
            mysh->buffer = str;
            for (i = 0; mysh->buffer[i] != '\n'; i++);
            mysh->buffer[i] = '\0';
            mysh->cmd = my_str_to_wordtab(mysh->buffer, ' ');
            if (mysh->cmd[0] == NULL)
                return (0);
            if (my_strncmp(mysh->cmd[0], "cd", 2) == 0)
                verify_cd(mysh, env, ac);
            if (my_strncmp(mysh->cmd[0], "exit", 4) == 0)
            {
                my_printf("exit\n");
                exit(0);
            }
            else if (my_strncmp(mysh->cmd[0], "cd", 2) != 0 && \
            my_strncmp(mysh->cmd[0], "exit", 4) != 0)
            {
                get_path(mysh, env);
                process(pid, ptr, mysh, env);
            }
        }
    }
}
