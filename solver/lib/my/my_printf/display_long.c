/*
** EPITECH PROJECT, 2021
** display_long.c
** File description:
** display_long
*/

#include "my_printf/my_printf.h"
#include "lib.h"

int count_length_long(long nb)
{
    int nb_length = 1;

    while (nb / 10 > 0) {
        nb_length++;
        nb = nb / 10;
    }
    return (nb_length);
}

void temp_function_long(long nb, int i)
{
    while (i > 1) {
        nb = nb / 10;
        i--;
    }
    my_putchar(((nb) % 10) + '0');
}

void my_put_unit_long(long nb)
{
    int i = count_length_long(nb);

    while (i > 0) {
        temp_function_long(nb, i);
        i--;
    }
}

int handle_neg_long(long nb)
{
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (nb < 0) {
        if (nb == -__LONG_MAX__ - 1) {
            my_putstr("-9223372036854775808");
            return (0);
        }
        nb = nb * (long)-1;
        my_putchar('-');
    }
    my_put_unit_long(nb);
    return (0);
}

void display_long(va_list *ap)
{
    long nb = va_arg(*ap, long);

    handle_neg_long(nb);
}
