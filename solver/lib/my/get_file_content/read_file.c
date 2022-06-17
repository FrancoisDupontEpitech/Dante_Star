/*
** EPITECH PROJECT, 2021
** read_file.c
** File description:
** read_file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "lib.h"
#include "exit.h"
#include <stdio.h>

static int check_file_content(char **buffer)
{
    for (int i = 0; buffer[0][i] != '\0'; i++) {
        if (buffer[0][i] != '*' && buffer[0][i] != 'X' &&
        buffer[0][i] != '\n') {
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}

int read_file(int fd, char **buffer, int size)
{
    int ret;

    *buffer = malloc(sizeof(char) * (size + 1));
    if (*buffer == 0)
        return (EXIT_MALLOC);
    ret = read(fd, *buffer, size);
    if (ret == -1) {
        my_putstr(FAILURE_MSG);
        return (EXIT_READ);
    } else if (check_file_content(buffer) == 1)
        return (EXIT_READ);
    (*buffer)[ret] = '\0';
    return (EXIT_SUCCESS);
}
