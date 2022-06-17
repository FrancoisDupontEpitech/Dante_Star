/*
** EPITECH PROJECT, 2022
** follow_path.c
** File description:
** follow_path
*/

#include "lib.h"
#include "solver.h"
#include "exit.h"
#include "my_printf/my_printf.h"
#include <stdlib.h>

static const int coord[4][2] = {
    {0, +1},
    {+1, 0},
    {0, -1},
    {-1, 0}
};

static int move_step_forward_2(maze_t *maze, int x, int y)
{
    if (!(maze->y + y < maze->max_y && maze->x + x < maze->max_x))
        return 0;
    if (!(maze->x + x >= 0 && maze->y + y >= 0))
        return 0;
    if (!(maze->maze[maze->x + x][maze->y + y] == maze->find))
        return 0;
    maze->maze[maze->x + x][maze->y + y] = maze->replace;
    maze->y = maze->y + y;
    maze->x = maze->x + x;
    return 1;
}

static int move_step_forward(maze_t *maze, char find, char replace)
{
    maze->find = find;
    maze->replace = replace;
    maze->maze[maze->x][maze->y] = replace;
    for (int i = 0; i < 4; i++)
        if (move_step_forward_2(maze, coord[i][0], coord[i][1]) == 1)
            return EXIT_SUCCESS;
    if (find == 'P' && replace == 'F')
        return EXIT_ERROR;
    if (move_step_forward(maze, 'P', 'F') == EXIT_ERROR)
        return EXIT_ERROR;
    return EXIT_SUCCESS;
}

int follow_path(maze_t *maze)
{
    int i = 0;

    if (maze->max_x - 1 == maze->x && maze->max_y - 1 == maze->y)
        maze->maze[maze->x][maze->y] = 'P';
    while (maze->maze[maze->max_x - 1][maze->max_y - 1] == '*') {
        if (move_step_forward(maze, '*', 'P') == EXIT_ERROR)
            return EXIT_ERROR;
        i++;
    }
    return EXIT_SUCCESS;
}
