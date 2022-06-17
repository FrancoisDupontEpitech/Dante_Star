/*
** EPITECH PROJECT, 2021
** get_file_data.c
** File description:
** get_file_data
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "lib.h"
#include "exit.h"

int get_file_data(char const *filepath, char **buffer)
{
    int fd = open(filepath, O_RDONLY);
    off_t current_pos = 0;
    int size = 0;

    if (fd == -1) {
        my_putstr(FAILURE_MSG);
        close(fd);
        return (EXIT_OPEN);
    }
    current_pos = lseek(fd, 0, SEEK_CUR);
    size = lseek(fd, 0, SEEK_END);
    lseek(fd, current_pos, SEEK_SET);
    if (read_file(fd, buffer, size) == EXIT_READ) {
        free(buffer);
        close(fd);
        return (EXIT_READ);
    }
    close(fd);
    return (EXIT_SUCCESS);
}
