/*
** EPITECH PROJECT, 2021
** my_memset.c
** File description:
** my_memset
*/

#include <stddef.h>

void *my_memset(void *s, int c, size_t n)
{
    unsigned char *p = s;

    while (n--)
        *p++ = (unsigned char)c;
    *p = (unsigned char)0;
    return (p);
}
