/*
** EPITECH PROJECT, 2022
** sanatize_string.c
** File description:
** sanatize_string
*/

#include <stdlib.h>
#include "lib.h"

void get_str_sanatized(char *buffer, char *str)
{
    int start = get_string_start(str);
    int end = get_string_end(str);

    remove_all_extra_spaces(buffer, str, start, end);
}

char *sanatize_string(char *str)
{
    char *buffer = NULL;
    int str_sanatized_len = get_str_sanatized_size(str);

    buffer = malloc(sizeof(char) * (str_sanatized_len + 1));
    if (buffer == NULL)
        return NULL;
    get_str_sanatized(buffer, str);
    return buffer;
}
