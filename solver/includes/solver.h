/*
** EPITECH PROJECT, 2021
** src.h
** File description:
** src
*/

#ifndef SRC_H_
    #define SRC_H_

struct maze_s {
    char **maze;
    int x;
    int y;
    int max_x;
    int max_y;
    char find;
    char replace;
};
typedef struct maze_s maze_t;

int solver(int ac, char **av);
void display_help(void);
int init_struct(char *filepath, maze_t *maze);
void find_maze_size(maze_t *maze);
void clear_maze(maze_t *maze);
int follow_path(maze_t *maze);
void display_maze(char **maze);
int handle_file_content(char *buffer);

#endif /* !SRC_H_ */
