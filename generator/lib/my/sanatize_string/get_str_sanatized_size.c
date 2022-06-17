/*
** EPITECH PROJECT, 2022
** get_str_sanatized_size.c
** File description:
** get_str_sanatized_size
*/

#include "lib.h"

int skip_count_first_spaces(char *str, int *spaces_skip)
{
    int start = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t') {
            (*spaces_skip)++;
            start++;
        } else
            break;
    }
    return start;
}

void skip_count_double_space(char *str, int *i, int end, int *spaces_skip)
{
    int space = 0;

    for (int c = *i; c < end; c++, (*i)++) {
        if (str[c] == ' ' || str[c] == '\t')
            space++;
        else
            break;
        if (space >= 2)
            (*spaces_skip)++;
    }
}

void skip_count_middle_spaces(char *str, int start, int end, int *spaces_skip)
{
    for (int i = start; i < end; i++)
        if (str[i] == ' ' || str[i] == '\t')
            skip_count_double_space(str, &i, end, spaces_skip);
}

int skip_count_last_spaces(char *str, int *spaces_skip)
{
    int len = my_strlen(str);
    int end = len;

    for (int i = len - 1; i > 0; i--)
        if (str[i] == ' ' || str[i] == '\t') {
            (*spaces_skip)++;
            end--;
        } else
            break;
    return end;
}

int get_str_sanatized_size(char *str)
{
    int ret_size = 0;
    int spaces_skip = 0;
    int start = 0;
    int end = 0;

    start = skip_count_first_spaces(str, &spaces_skip);
    end = skip_count_last_spaces(str, &spaces_skip);
    skip_count_middle_spaces(str, start, end, &spaces_skip);
    ret_size = my_strlen(str) - spaces_skip;
    return ret_size;
}
