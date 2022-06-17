/*
** EPITECH PROJECT, 2022
** my_putstr_error.c
** File description:
** my_putstr_error
*/

#include <unistd.h>
#include "lib.h"

void my_putstr_error(char const *error_msg)
{
    write(2, error_msg, my_strlen(error_msg));
}
