/*
** EPITECH PROJECT, 2021
** display_1.c
** File description:
** display_1
*/

#include <stdarg.h>
#include <stdio.h>
#include "lib.h"
#include "exit.h"

void display_char(va_list *ap)
{
    my_putchar(va_arg(*ap, int));
}

void display_int(va_list *ap)
{
    my_put_nbr(va_arg(*ap, int));
}

void display_str(va_list *ap)
{
    char *str = va_arg(*ap, char *);

    if (str == NULL)
        my_putstr("(null)");
    else
        my_putstr(str);
}
