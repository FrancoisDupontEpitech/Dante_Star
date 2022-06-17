/*
** EPITECH PROJECT, 2022
** free_int_2d_array.c
** File description:
** free_int_2d_array
*/

#include <stdlib.h>

void free_int_2d_array(int **arr, int size)
{
    for (int i = 0; i < size; i++)
        free(arr[i]);
    free(arr);
}
