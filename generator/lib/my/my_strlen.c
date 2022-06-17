/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** count ans return number of char in a string
*/

#include <stddef.h>

int my_strlen(char const *str)
{
    int len = 0;

    if (str == NULL)
        return (0);
    while (str[len] != '\0')
        len++;
    return (len);
}
