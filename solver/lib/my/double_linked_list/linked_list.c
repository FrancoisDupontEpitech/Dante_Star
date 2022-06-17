/*
** EPITECH PROJECT, 2021
** linked_list.c
** File description:
** linked_list
*/

#include <stdlib.h>
#include "lib.h"
#include "my_printf/my_printf.h"
#include "linked_list/double_linked_list.h"

void set_linked_list(int ac, char **av, node_t **head)
{
    node_t *tmp = NULL;

    for (int i = 0; i < ac; i++) {
        tmp = create_new_node(av[i]);
        insert_at_end(head, tmp);
    }
}

node_t *create_linked_list(int ac, char **av)
{
    node_t *head = NULL;

    set_linked_list(ac, av, &head);
    if (head == NULL) {
        my_putstr_error("Error: empty list\n");
        return NULL;
    }
    return (head);
}
