/*
** EPITECH PROJECT, 2022
** generator_perfect_maze.c
** File description:
** generator_perfect_maze
*/

#include "lib.h"
#include "generator.h"
#include "exit.h"
#include "my_printf/my_printf.h"
#include <time.h>
#include <stdlib.h>

int choose_random_direction(maze_t *maze, int x, int y)
{
    maze->maze[x][y] = '*';
    switch (rand() % 2) {
        case 0:
            if (x - 1 >= 0) {
                maze->maze[x - 1][y] = '*';
                return 1;
            }
            break;
        case 1:
            if (y - 1 >= 0) {
                maze->maze[x][y - 1] = '*';
                return 1;
            }
            break;
    }
    return 0;
}

void loop_hover_direction(maze_t *maze, int x, int y)
{
    int valid = 0;

    while (valid == 0)
        valid = choose_random_direction(maze, x, y);
}

void create_entry_and_exit(maze_t *maze)
{
    maze->maze[0][0] = '*';
    maze->maze[maze->max_x - 1][maze->max_y - 1] = '*';
    if (maze->max_x % 2 == 0)
        maze->maze[maze->max_x - 2][maze->max_y - 1] = '*';
}

static void create_perfect_maze_path(maze_t *maze)
{
    srand(time(NULL));
    create_entry_and_exit(maze);
    for (int i = 0; maze->maze[0][i] != '\0'; i++)
        maze->maze[0][i] = '*';
    for (int x = 2; x < maze->max_x && maze->maze[x] != NULL; x = x + 2) {
        for (int y = 0; y < maze->max_y && maze->maze[x][y] != '\0'; y = y + 2)
            loop_hover_direction(maze, x, y);
    }
}

int generator_perfect_maze(maze_t *maze)
{
    create_perfect_maze_path(maze);
    return EXIT_SUCCESS;
}
