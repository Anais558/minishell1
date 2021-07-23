/*
** EPITECH PROJECT, 2020
** my_putnbr_hexa.c
** File description:
** hexa base
*/
#include <unistd.h>
#include "my.h"

int my_putnbr_hexa(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    }
    if (nb >= 10 && nb <= 15) {
        my_putchar(nb + 87);
    }
    if (nb >= 16) {
        my_putnbr_hexa(nb / 16);
        my_putnbr_hexa(nb % 16);
    }
    return (nb);
}
