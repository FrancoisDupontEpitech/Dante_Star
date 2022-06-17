/*
** EPITECH PROJECT, 2022
** display_maze.h
** File description:
** display_maze
*/

#include "lib.h"
#include "solver.h"
#include "exit.h"

void display_maze(char **maze)
{
    int i = 0;

    while (maze[i + 1] != NULL) {
        my_putstr(maze[i]);
        my_putchar('\n');
        i++;
    }
    my_putstr(maze[i]);
}
