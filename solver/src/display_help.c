/*
** EPITECH PROJECT, 2022
** display_help.c
** File description:
** display_help
*/

#include "lib.h"

static const char *help_msg =                                           \
    "USAGE\n"                                                           \
    "\t./solver maze\n"                                                 \
    "DESCRIPTION\n"                                                     \
    "\tmaze representing the file.txt containing the maze\n";           \

void display_help(void)
{
    my_putstr(help_msg);
}
