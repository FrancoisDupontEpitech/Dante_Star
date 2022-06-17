/*
** EPITECH PROJECT, 2021
** display_hexadecimal_lowercase.c
** File description:
** display_hexadecimal_lowercase
*/

#include <stdarg.h>
#include "my_printf/my_printf.h"
#include "lib.h"

void display_hexadecimal_lowercase(va_list *ap)
{
    int nbr = va_arg(*ap, int);

    if (nbr == 0) {
        my_putchar('0');
        return;
    }
    display_all_bases(nbr, 16);
}
