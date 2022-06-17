/*
** EPITECH PROJECT, 2022
** handle_file_content.c
** File description:
** handle_file_content
*/

#include "lib.h"
#include "solver.h"
#include "exit.h"
#include <stdlib.h>
#include <stdio.h>

static int check_stars(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '*')
            return EXIT_SUCCESS;
    return EXIT_ERROR;
}

static int check_chars(char *buffer)
{
    if (check_stars(buffer) == EXIT_ERROR)
        return EXIT_ERROR;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] != 'X' && buffer[i] != '*' && buffer[i] != '\n')
            return EXIT_ERROR;
    }
    return EXIT_SUCCESS;
}

static int is_same_size(char c, int cols, int *y)
{
    if (c == '\n') {
        if (*y != cols)
            return EXIT_ERROR;
        *y = 0;
    } else
        (*y)++;
    return EXIT_SUCCESS;
}

static int check_size(char *buffer)
{
    int cols = 0;
    int y = 0;

    for (int i = 0; buffer[i] != '\n'; i++)
        cols++;
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (is_same_size(buffer[i], cols, &y) == EXIT_ERROR)
            return EXIT_ERROR;
    }
    return EXIT_SUCCESS;
}

int handle_file_content(char *buffer)
{
    if (check_chars(buffer) == EXIT_ERROR)
        return EXIT_ERROR;
    if (check_size(buffer) == EXIT_ERROR)
        return EXIT_ERROR;
    return EXIT_SUCCESS;
}
