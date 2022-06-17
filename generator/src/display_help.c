/*
** EPITECH PROJECT, 2022
** display_help.c
** File description:
** display_help
*/

#include "lib.h"

static const char *help_msg =                                            \
    "USAGE\n"                                                            \
    "\t./generator x y [perfect]\n"                                      \
    "DESCRIPTION\n"                                                      \
    "\tx representing the number of lines of the maze\n"                 \
    "\ty representing the number of columns of the maze\n"               \
    "\t[perfect] representing a maze that has no loops and no clusters; "\
    "therefore, following a wall makes us cross the entire maze\n";      \

void display_help(void)
{
    my_putstr(help_msg);
}
