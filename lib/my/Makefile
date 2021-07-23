##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Make file
##

CC = gcc

SRC=	my_printf.c	\
		my_put_nbr_pos.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_putnbr_base.c	\
		my_putnbr_hexa_maj.c	\
		my_putnbr_hexa.c	\
		my_putstr_s.c	\
		my_putstr.c	\
		option.c

OBJ = $(SRC:.c=.o)

CFLAGS = -w -Wall -I./include/

RM = rm -f

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) ../$(NAME)

re: fclean all

.PHONY: all clean fclean