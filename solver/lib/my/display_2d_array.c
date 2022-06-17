/*
** EPITECH PROJECT, 2021
** display_int_2d_array.c
** File description:
** display_int_2d_array
*/

#include "lib.h"

void display_str_2d_array(char **arr)
{
    for (int i = 0; arr[i] != 0; i++) {
        my_putstr(arr[i]);
        my_putchar('\n');
    }
}

void display_int_2d_array_2(int nb)
{
    if (nb == 'o')
        my_putchar((char)nb);
    else
        my_put_nbr(nb);
}

void display_int_2d_array(int **arr)
{
    for (int i = 0; arr[i] != 0; i++) {
        for (int c = 0; arr[i][c] != -1; c++)
            display_int_2d_array_2(arr[i][c]);
        my_putchar('\n');
    }
}
