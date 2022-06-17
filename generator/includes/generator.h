/*
** EPITECH PROJECT, 2021
** generator.h
** File description:
** src
*/

#ifndef GENERATOR_H_
    #define GENERATOR_H_

struct maze_s {
    char **maze;
    int max_x;
    int max_y;
};
typedef struct maze_s maze_t;

int generator(int ac, char **av);
void display_help(void);
int handle_error(int ac, char **av);
int generator_imperfect_maze(maze_t *maze);
int generator_perfect_maze(maze_t *maze);
int generate_rectangle(char ***buffer, int x, int y);
void delete_random_walls(maze_t *maze);

#endif /* !GENERATOR_H_ */
