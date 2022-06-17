/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** my_put_nbr
*/

void my_putchar(char c);
int my_putstr(char const *str);

int count_length(int nb)
{
    int nb_length = 1;

    while (nb / 10 > 0) {
        nb_length++;
        nb = nb / 10;
    }
    return (nb_length);
}

void temp_function(int nb, int i)
{
    while (i > 1) {
        nb = nb / 10;
        i--;
    }
    my_putchar(((nb) % 10) + '0');
}

void my_put_unit(int nb)
{
    int i = count_length(nb);

    while (i > 0) {
        temp_function(nb, i);
        i--;
    }
}

int my_put_nbr(int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (nb < 0) {
        if (nb == -2147483648) {
            my_putstr("-2147483648");
            return (0);
        }
        nb = nb * -1;
        my_putchar('-');
    }
    my_put_unit(nb);
    return (0);
}
