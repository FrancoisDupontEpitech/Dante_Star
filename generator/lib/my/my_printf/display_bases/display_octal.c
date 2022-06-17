/*
** EPITECH PROJECT, 2021
** display_octal.c
** File description:
** display_octal
*/

#include <stdarg.h>
#include "lib.h"
#include "my_printf/my_printf.h"

void display_octal(va_list *ap)
{
    int nbr = va_arg(*ap, int);

    if (nbr == 0) {
        my_putchar('0');
        return;
    }
    display_all_bases(nbr, 8);
}
