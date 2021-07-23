/*
** EPITECH PROJECT, 2020
** my_putnbr_HEXA.c
** File description:
** hexa base maj
*/

#include <unistd.h>
#include "my.h"

int my_putnbr_HEXA(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    }
    if (nb >= 10 && nb <= 15) {
        my_putchar(nb + 55);
    }
    if (nb >= 16) {
        my_putnbr_HEXA(nb / 16);
        my_putnbr_HEXA(nb % 16);
    }
    return (nb);
}
