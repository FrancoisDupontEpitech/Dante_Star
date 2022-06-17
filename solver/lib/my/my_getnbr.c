/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** get a number as a string and return a number as an int
*/

#include "lib.h"

int get_nbr_len(char *str)
{
    int i = 0;

    if (str == 0)
        return (0);
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (i);
    }
    return (i);
}

int is_negative(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            break;
        }
        i++;
    }
    if (i != 0 && str[i - 1] == '-')
        return (-1);
    return (1);
}

int get_nbr_from_str(char *str, int len)
{
    int nb = 0;

    for (int i = 0; i < len; i++)
        nb = (10 * nb) + (str[i] - '0');
    return (nb);
}

int transform_str_to_nbr(char const *str)
{
    int sign = is_negative(str);
    char *str_cp = (char *)str;
    char *cleaned_str = clean_str(str_cp);
    int nbr_len = get_nbr_len(cleaned_str);
    char nbr[nbr_len + 1];
    char *str_nb;
    int final_nb;

    if (cleaned_str == 0)
        return (0);
    str_nb = get_first_nbr(cleaned_str, nbr);
    final_nb = get_nbr_from_str(str_nb, nbr_len) * sign;
    if (check_nbr_error(sign, str_nb, final_nb) == -1)
        return (0);
    my_put_nbr(final_nb);
    return (final_nb);
}

int my_getnbr(char const *str)
{
    if (str == 0)
        return (0);
    return (transform_str_to_nbr(str));
}
