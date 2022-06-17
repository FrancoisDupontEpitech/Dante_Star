/*
** EPITECH PROJECT, 2021
** display_unsigned_int.c
** File description:
** display_unsigned_int
*/

#include <stdarg.h>
#include <unistd.h>
#include "lib.h"
#include "exit.h"

int count_length_unsigned_int(unsigned int nb)
{
    int nb_length = 1;

    while (nb / 10 > 0) {
        nb_length++;
        nb = nb / 10;
    }
    return (nb_length);
}

void display_digits(unsigned int nb, int i)
{
    while (i > 1) {
        nb = nb / 10;
        i--;
    }
    my_putchar(DTOA(nb % 10));
}

void my_put_unit_unsigned_int(unsigned int nb)
{
    int i = count_length_unsigned_int(nb);

    while (i > 0) {
        display_digits(nb, i);
        i--;
    }
}

void my_put_unsigned_int(unsigned int nb)
{
    if (nb == 0)
        my_putchar('0');
    else
        my_put_unit_unsigned_int(nb);
}

void display_unsigned_int(va_list *ap)
{
    my_put_unsigned_int(va_arg(*ap, unsigned int));
}
