/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** reverse a string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char temp;

    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    str[len] = '\0';
    return (str);
}
