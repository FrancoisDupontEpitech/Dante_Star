/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** my_strcat
*/

#include "exit.h"
#include <stdlib.h>

int my_strlen(char const *str);

int my_strcat(char **dest, char const *str1, char const *str2)
{
    int c = 0;

    *dest = malloc(sizeof(char) * (my_strlen(str1) + my_strlen(str2) + 1));
    if (*dest == NULL)
        return EXIT_MALLOC;
    for (int i = 0; str1[i] != '\0'; i++, c++)
        (*dest)[c] = str1[i];
    for (int i = 0; str2[i] != '\0'; i++, c++)
        (*dest)[c] = str2[i];
    (*dest)[c] = '\0';
    return EXIT_SUCCESS;
}
