/*
** EPITECH PROJECT, 2020
** my_putnbr_base.c
** File description:
** base
*/

#include "my.h"

int my_putnbr_base(int nb, int n)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= n - 1)
        my_putchar(nb + 48);

    if (nb >= n) {
        my_putnbr_base(nb / n, n);
        my_putchar(nb % n + 48);
    }
    return (nb);
}
