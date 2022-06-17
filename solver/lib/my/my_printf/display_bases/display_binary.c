/*
** EPITECH PROJECT, 2021
** display_binary.c
** File description:
** display_binary
*/

#include <stdarg.h>
#include "my_printf/my_printf.h"
#include "lib.h"

void display_binary(va_list *ap)
{
    int nbr = va_arg(*ap, int);

    if (nbr == 0) {
        my_putchar('0');
        return;
    }
    display_all_bases(nbr, 2);
}
