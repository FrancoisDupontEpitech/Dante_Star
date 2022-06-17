/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** my_strdup
*/

#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));

    str = my_strcpy(str, src);
    return (str);
}
