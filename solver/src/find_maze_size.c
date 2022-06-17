/*
** EPITECH PROJECT, 2022
** find_maze_size.c
** File description:
** find_maze_size
*/

#include "solver.h"
#include "lib.h"

void find_maze_size(maze_t *maze)
{
    int x = 0;
    int y = 0;

    while (maze->maze[x] != NULL)
        x++;
    while (maze->maze[0][y] != '\0')
        y++;
    maze->max_x = x;
    maze->max_y = y;
}
