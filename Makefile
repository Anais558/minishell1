##
## EPITECH PROJECT, 2019
## Minishell1
## File description:
## Makefile
##

CC = gcc

SRC	 =	src/cd.c	\
		src/main.c	\
		src/path.c	\
		src/process.c	\
		src/my_str_to_wordtab.c	\
		src/my_strncmp.c	\
		src/my_strdup.c	\
		src/my_strcat.c

OBJ =	$(SRC:.c=.o)

CFLAGS = -w -Wall -I./include/

LDFLAGS = -L lib/my -lmy

RM = rm -f

NAME = mysh

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJ) $(LIB) -o $(NAME) -lm $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	$(MAKE) -C ./lib/my clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C ./lib/my fclean

re: fclean all

.PHONY: all clean fclean re