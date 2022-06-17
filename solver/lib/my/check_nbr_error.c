/*
** EPITECH PROJECT, 2021
** check_nbr_error.c
** File description:
** check_nbr_error
*/

#include "lib.h"

int check_nbr_error(int sign, char *str, int nb)
{
    int power = 1;

    if (nb < 0 && sign != -1)
        return (-1);
    str = my_revstr(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (ATOD(str[i]) * sign != (nb / power) % 10)
            return (-1);
        power *= 10;
    }
    return (0);
}
