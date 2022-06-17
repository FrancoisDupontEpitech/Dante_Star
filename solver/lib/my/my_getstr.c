/*
** EPITECH PROJECT, 2021
** my_getstr.c
** File description:
** my_getstr
*/

#include <stdlib.h>
#include "lib.h"

int get_nbr_size(int nbr)
{
    int size = 0;

    if (nbr == 0)
        return (1);
    if (nbr < 0)
        nbr = -nbr;
    while (nbr > 0) {
        nbr = nbr / 10;
        size++;
    }
    return (size);
}

char *my_getstr(int nbr)
{
    int size = get_nbr_size(nbr);
    char *dest = malloc(sizeof(char) * (size + 2));
    int divide = 1;
    int nbr_cpy = nbr;

    if (nbr < 0)
        nbr = -nbr;
    for (int i = 0; i < size; i++, divide *= 10)
        dest[i] = (nbr / divide) % 10 + '0';
    if (nbr_cpy < 0) {
        dest[size] = '-';
        size++;
    }
    dest[size] = '\0';
    my_revstr(dest);
    return (dest);
}
