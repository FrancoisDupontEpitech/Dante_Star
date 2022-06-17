/*
** EPITECH PROJECT, 2022
** generate_rectangle.c
** File description:
** generate_rectangle
*/

#include "lib.h"
#include "generator.h"
#include "exit.h"
#include <stdlib.h>

int alloc_rectangle(char ***buffer, int x, int y)
{
    *buffer = malloc(sizeof(char *) * (x + 1));
    if (*buffer == NULL)
        return EXIT_MALLOC;
    for (int i = 0; i < x; i++) {
        (*buffer)[i] = malloc(sizeof(char) * (y + 1));
        if ((*buffer)[i] == NULL)
            return EXIT_MALLOC;
    }
    return EXIT_SUCCESS;
}

void fill_buffer(char **buffer, int x, int y)
{
    for (int i = 0; i < x; i++) {
        for (int c = 0; c < y; c++)
            buffer[i][c] = 'X';
        buffer[i][y] = '\0';
    }
    buffer[x] = NULL;
}

int generate_rectangle(char ***buffer, int x, int y)
{
    if (alloc_rectangle(buffer, x, y) == EXIT_ERROR)
        return EXIT_ERROR;
    fill_buffer(*buffer, x, y);
    return EXIT_SUCCESS;
}
