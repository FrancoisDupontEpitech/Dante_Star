/*
** EPITECH PROJECT, 2022
** delete_random_walls.c
** File description:
** delete_random_walls
*/

#include "generator.h"
#include <time.h>
#include <stdlib.h>

static void replace_wall_by_path(maze_t *maze, int x, int y)
{
    if (maze->maze[x][y] == 'X') {
        if (rand() % 2)
            maze->maze[x][y] = '*';
    }
}

void delete_random_walls(maze_t *maze)
{
    srand(time(NULL));

    for (int x = 0; maze->maze[x] != NULL; x++) {
        for (int y = 0; maze->maze[x][y] != '\0'; y++)
            replace_wall_by_path(maze, x, y);
    }
}
