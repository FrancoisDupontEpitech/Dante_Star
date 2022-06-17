/*
** EPITECH PROJECT, 2021
** parse_string
** File description:
** parse_string
*/

int my_strlen(char const *str);

int is_alpha_numeric(char const *str, int *c)
{
    if (str[*c] > 'a' && str[*c] < 'z')
        return (1);
    if (str[*c] > 'A' && str[*c] < 'Z')
        return (1);
    if (str[*c] > '0' && str[*c] < '9')
        return (1);
    return (0);
}

int find_str_last_alphanumeric(char const *str)
{
    for (int i = my_strlen(str); i >= 0; i--) {
        if (is_alpha_numeric(str, &i) == 1)
            return (i);
    }
    return (0);
}

int parse_string(char const *str, int *count, int *words_nb, int i)
{
    while (is_alpha_numeric(str, &i) == 0) {
        if (*count == 0)
            (*words_nb)++;
        (*count)++;
        i++;
    }
    return (i);
}
