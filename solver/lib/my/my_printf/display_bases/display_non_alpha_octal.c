/*
** EPITECH PROJECT, 2021
** display_non_alpha_octal.c
** File description:
** display_non_alpha_octal
*/

#include <stdarg.h>
#include "lib.h"
#include "my_printf/my_printf.h"
#include "exit.h"

int get_octal_len(unsigned int nbr, int base)
{
    int i = 0;

    while (nbr > 0) {
        nbr /= base;
        i++;
    }
    return (i);
}

void display_first_zeros(int len)
{
    my_putchar('\\');
    if (len < 3) {
        for (int i = len; i < 3; i++)
            my_putchar('0');
    }
}

void display_octal_with_backslash_and_zeros(unsigned int nbr, int base)
{
    int len = get_octal_len(nbr, base);
    char ret[len + 1];
    int temp = 0;

    display_first_zeros(len);
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

void display_non_alpha_octal(va_list *ap)
{
    unsigned char *str = va_arg(*ap, unsigned char *);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127)
            display_octal_with_backslash_and_zeros((int)str[i], 8);
        else
            my_putchar(str[i]);
    }
}
