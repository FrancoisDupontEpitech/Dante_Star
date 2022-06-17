/*
** EPITECH PROJECT, 2022
** handle_error.c
** File description:
** handle_error
*/

#include "lib.h"
#include "generator.h"
#include "exit.h"
#include "my_printf/my_printf.h"

int is_integer(char *str)
{
    if (str != NULL)
        if (*str != '+' && *str != '-' && (*str < '0' || *str > '9'))
            return EXIT_ERROR;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return EXIT_ERROR;
    }
    return EXIT_SUCCESS;
}

int handle_error(int ac, char **av)
{
    if (ac != 3 && ac != 4)
        return EXIT_ERROR;
    if (is_integer(av[1]) == EXIT_ERROR)
        return EXIT_ERROR;
    if (is_integer(av[2]) == EXIT_ERROR)
        return EXIT_ERROR;
    if (ac == 4 && my_strcmp(av[3], "perfect") == -1)
        return EXIT_ERROR;
    if (my_getnbr(av[1]) < 1 || my_getnbr(av[2]) < 1)
        return EXIT_ERROR;
    return EXIT_SUCCESS;
}
