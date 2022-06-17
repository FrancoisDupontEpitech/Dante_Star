/*
** EPITECH PROJECT, 2021
** display_all_bases.c
** File description:
** display_all_bases
*/

#include <stdarg.h>
#include "my_printf/my_printf.h"
#include "lib.h"

int get_ret_len(unsigned int nbr, int base)
{
    int i = 0;

    while (nbr > 0) {
        nbr /= base;
        i++;
    }
    return (i);
}

void display_all_bases(unsigned int nbr, int base)
{
    int len = get_ret_len(nbr, base);
    char ret[len + 1];
    int temp = 0;

    for (int i = 0; nbr > 0; i++) {
        temp = nbr % base;
        nbr = nbr / base;
        if (temp >= 10)
            ret[i] = D_TO_LOWERCASE(temp - 10);
        else
            ret[i] = DTOA(temp);
    }
    ret[len] = '\0';
    my_putstr(my_revstr(ret));
}
