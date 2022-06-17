/*
** EPITECH PROJECT, 2022
** free_str_2d_array.c
** File description:
** free_str_2d_array
*/

#include <stdlib.h>

void free_str_2d_array(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
}
