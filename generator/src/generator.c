/*
** EPITECH PROJECT, 2022
** generator.c
** File description:
** generator
*/

#include "lib.h"
#include "generator.h"
#include "exit.h"
#include "my_printf/my_printf.h"
#include <stdio.h>
#include <stdlib.h>

static void display_maze(char **maze)
{
    int i = 0;

    while (maze[i + 1] != NULL) {
        printf("%s\n", maze[i]);
        i++;
    }
    printf(maze[i]);
}

static int init_struct(maze_t *maze, int x, int y)
{
    if (generate_rectangle(&maze->maze, x, y) == EXIT_MALLOC)
        return EXIT_ERROR;
    maze->max_x = x;
    maze->max_y = y;
    return EXIT_SUCCESS;
}

static int choose_maze_type(int ac, int x, int y)
{
    maze_t maze;

    if (init_struct(&maze, x, y) == EXIT_ERROR)
        return EXIT_ERROR;
    if (ac == 3) {
        if (generator_imperfect_maze(&maze) == EXIT_ERROR)
            return EXIT_ERROR;
    }
    if (ac == 4) {
        if (generator_perfect_maze(&maze) == EXIT_ERROR)
            return EXIT_ERROR;
    }
    display_maze(maze.maze);
    free_str_2d_array(maze.maze);
    return EXIT_SUCCESS;
}

static int find_maze_size(int ac, char **av)
{
    int x = my_getnbr(av[2]);
    int y = my_getnbr(av[1]);
    char *str_x = my_getstr(x);
    char *str_y = my_getstr(y);

    if (my_strcmp(str_x, av[2]) == -1)
        return EXIT_ERROR;
    if (my_strcmp(str_y, av[1]) == -1)
        return EXIT_ERROR;
    free(str_x);
    free(str_y);
    if (choose_maze_type(ac, x, y) == EXIT_ERROR)
        return EXIT_ERROR;
    return EXIT_SUCCESS;
}

int generator(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        display_help();
        return EXIT_SUCCESS;
    }
    if (handle_error(ac, av) == EXIT_ERROR)
        return EXIT_ERROR;
    return find_maze_size(ac, av);
}
