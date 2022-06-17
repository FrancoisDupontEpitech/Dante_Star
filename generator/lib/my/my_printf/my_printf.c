/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "lib.h"
#include "exit.h"
#include "my_printf/my_printf.h"

int find_arg_type_2(va_list *ap, char type, void (*fptr[])(va_list *ap))
{
    char *types = "csiduobxXSl";
    int i = 0;

    while (types[i] != '\0' && types[i] != type)
        i++;
    if (i == my_strlen(types))
        return (-1);
    fptr[i](ap);
    return (1);
}

int find_arg_type(va_list *ap, char type)
{
    void (*fptr[])(va_list *ap) = {
        display_char,
        display_str,
        display_int,
        display_int,
        display_unsigned_int,
        display_octal,
        display_binary,
        display_hexadecimal_lowercase,
        display_hexadecimal_uppercase,
        display_non_alpha_octal,
        display_long};

    return (find_arg_type_2(ap, type, fptr));
}

void loop_hover_arg_type(char *s, va_list *ap, int *i)
{
    if (find_arg_type(ap, s[*i + 1]) == -1) {
        if (s[*i + 1] == '%') {
            my_putchar('%');
            (*i)++;
        } else
            my_putchar(s[*i]);
    } else
        (*i)++;
}

void loop_hover(char *s, va_list *ap, int *i)
{
    if (s[*i] == '%' && s[*i + 1] != '\0')
        loop_hover_arg_type(s, ap, i);
    else {
        if (s[*i] != '%')
            my_putchar(s[*i]);
    }
}

int my_printf(char *s, ...)
{
    va_list ap;

    if (s == NULL)
        return (0);
    if (s[0] == '\0')
        return (0);
    va_start(ap, s);
    for (int i = 0; s[i] != '\0'; i++)
        loop_hover(s, &ap, &i);
    va_end(ap);
    return (1);
}
