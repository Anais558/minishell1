/*
** EPITECH PROJECT, 2021
** shell.h
** File description:
** shell
*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <assert.h>

typedef struct component {
    char **cmd;
    char *buffer;
    char **path;
    char *get;
}shell;

char *my_strncpy(char *str, char *dest, int j, char c);
int count(char *str, int j, char c);
int word_count(char *str, char c);
char **my_str_to_wordtab(char *str, char c);
void get_path(shell *mysh, char **env);
char *for_cd(shell *mysh, char **env);
void my_exit(shell *mysh);
void verify_cd(shell *mysh, char **env, int ac);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strdup(char *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest , char  const *src);
int cat_path(shell *mysh, char **env);
void process(pid_t pid, int ptr, shell *mysh, char **env);