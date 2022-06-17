/*
** EPITECH PROJECT, 2021
** display_all_bases.c
** File description:
** display_all_bases
*/

#include <stdarg.h>
#include "my_printf/my_printf.h"
#include "lib.h"

void display_hexa_uppercase(unsigned int nbr, int base)
{
    int len = get_ret_len(nbr, base);
    char ret[len + 1];
    int temp = 0;

    for (int i = 0; nbr > 0; i++) {
        temp = nbr % base;
        nbr = nbr / base;
        if (temp >= 10)
            ret[i] = D_TO_UPPERCASE(temp - 10);
        else
            ret[i] = DTOA(temp);
    }
    ret[len] = '\0';
    my_putstr(my_revstr(ret));
}

void display_hexadecimal_uppercase(va_list *ap)
{
    int nbr = va_arg(*ap, int);

    if (nbr == 0) {
        my_putchar('0');
        return;
    }
    display_hexa_uppercase(nbr, 16);
}
