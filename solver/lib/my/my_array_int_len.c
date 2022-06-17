/*
** EPITECH PROJECT, 2021
** my_array_int_len.c
** File description:
** my_array_int_len
*/

int my_array_int_len(int const *str)
{
    int len = 0;

    while (str[len] != -1)
        len++;
    return (len);
}
