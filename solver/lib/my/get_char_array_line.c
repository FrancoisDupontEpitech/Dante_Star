/*
** EPITECH PROJECT, 2022
** get_char_array_line.c
** File description:
** get_char_array_line
*/

#include <unistd.h>

int get_char_array_line(char **arr)
{
    int i = 0;

    while (arr[i] != NULL)
        i++;
    return i;
}
