/*
** EPITECH PROJECT, 2021
** parse_str.c
** File description:
** parse_str
*/

char *clean_str(char *str)
{
    while (*str != '\0' && (*str < '0' || *str > '9')) {
        if (*str != '-' && *str != '+')
            return (0);
        str++;
    }
    return (str);
}

char *get_first_nbr(char *str, char *dest)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            dest[i] = '\0';
            return (dest);
        } else
            dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
