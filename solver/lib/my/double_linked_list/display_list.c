/*
** EPITECH PROJECT, 2021
** display_list.c
** File description:
** display_list
*/

#include <stdlib.h>
#include "my_printf/my_printf.h"
#include "linked_list/double_linked_list.h"

void display_list(node_t *node)
{
    node_t *tmp = node;

    while (tmp != NULL) {
        my_printf("%s%c%s\n", tmp->name, '=', tmp->value);
        tmp = tmp->next;
    }
}
