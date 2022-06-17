/*
** EPITECH PROJECT, 2022
** remove_all_extra_spaces.c
** File description:
** remove_all_extra_spaces
*/

#include "lib.h"

int get_string_start(char *str)
{
    int start = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t')
            start++;
        else
            break;
    }
    return start;
}

int get_string_end(char *str)
{
    int len = my_strlen(str);
    int end = len;

    for (int i = len - 1; i > 0; i--)
        if (str[i] == ' ' || str[i] == '\t')
            end--;
        else
            break;
    return end;
}

void remove_double_space(char *str, int *i, int end)
{
    int space = 0;

    for (int c = *i; c < end; c++) {
        if (str[c] == ' ' || str[c] == '\t')
            space++;
        else
            break;
        if (space >= 2)
            (*i)++;
    }
}

void remove_all_extra_spaces(char *buffer, char *str, int start, int end)
{
    int c = 0;

    for (int i = start; i < end; i++) {
        if (str[i] == ' ' || str[i] == '\t')
            remove_double_space(str, &i, end);
        buffer[c] = str[i];
        c++;
    }
    buffer[c] = '\0';
}
