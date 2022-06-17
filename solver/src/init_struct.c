/*
** EPITECH PROJECT, 2022
** init_struct.c
** File description:
** init_struct
*/

#include "lib.h"
#include "solver.h"
#include "exit.h"
#include <stdlib.h>

int init_struct(char *filepath, maze_t *maze)
{
    char *buffer;

    maze->x = 0;
    maze->y = 0;
    if (get_file_data_using_stat(filepath, &buffer) == EXIT_ERROR)
        return EXIT_ERROR;
    if (handle_file_content(buffer) == EXIT_ERROR)
        return EXIT_ERROR;
    if (str_to_2d_array(buffer, &maze->maze, "\n") == EXIT_ERROR)
        return EXIT_ERROR;
    free(buffer);
    find_maze_size(maze);
    return EXIT_SUCCESS;
}
