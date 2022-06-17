/*
** EPITECH PROJECT, 2022
** clear_maze.c
** File description:
** clear_maze
*/

#include "solver.h"
#include <stdlib.h>

static void clear_dead_end(maze_t *maze, int x, int y)
{
    if (maze->maze[x][y] == 'F')
        maze->maze[x][y] = '*';
}

static void write_solved_path(maze_t *maze, int x, int y)
{
    if (maze->maze[x][y] == 'P')
        maze->maze[x][y] = 'o';
}

void clear_maze(maze_t *maze)
{
    for (int x = 0; maze->maze[x] != NULL; x++) {
        for (int y = 0; maze->maze[x][y] != '\0'; y++) {
            clear_dead_end(maze, x, y);
            write_solved_path(maze, x, y);
        }
    }
}
