/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display a char string
*/

#include <unistd.h>

void my_putchar(char c);
int my_strlen(char const *str);

int my_putstr(char const *str)
{
    int len = my_strlen(str);
    write(1, str, len);
    return (0);
}
