/*
** EPITECH PROJECT, 2020
** my_put_nbr_pos.c
** File description:
** positif numer
*/
#include <unistd.h>
#include "my.h"

int my_put_nbr_pos(int nb)
{
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    return (nb);
}
