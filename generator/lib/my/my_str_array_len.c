/*
** EPITECH PROJECT, 2022
** my_str_array_len.c
** File description:
** my_str_array_len
*/

#include "lib.h"

int my_str_array_len(char **arr)
{
    int i = 0;

    while (arr[i] != NULL)
        i++;
    return i;
}
