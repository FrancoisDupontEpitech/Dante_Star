/*
** EPITECH PROJECT, 2022
** solver.c
** File description:
** solver
*/

#include "lib.h"
#include "solver.h"
#include "exit.h"

static int call_sub_instructions(char *filepath)
{
    maze_t maze;

    if (init_struct(filepath, &maze) == EXIT_ERROR)
        return EXIT_ERROR;
    find_maze_size(&maze);
    if (follow_path(&maze) == EXIT_ERROR)
        return EXIT_ERROR;
    clear_maze(&maze);
    display_maze(maze.maze);
    free_str_2d_array(maze.maze);
    return EXIT_SUCCESS;
}

int solver(int ac, char **av)
{
    if (ac != 2)
        return EXIT_ERROR;
    if (my_strcmp(av[1], "-h") == 0 || my_strcmp(av[1], "--help") == 0) {
        display_help();
        return EXIT_SUCCESS;
    }
    return call_sub_instructions(av[1]);
}
