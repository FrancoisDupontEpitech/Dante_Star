/*
** EPITECH PROJECT, 2021
** find_node.c
** File description:
** find_node
*/

#include <stdlib.h>
#include "lib.h"
#include "linked_list/double_linked_list.h"

node_t *find_node(node_t *head, char *name)
{
    node_t *tmp = head;

    while (tmp != NULL) {
        if (my_strcmp(tmp->name, name) == 0)
            return tmp;
        tmp = tmp->next;
    }
    return NULL;
}
