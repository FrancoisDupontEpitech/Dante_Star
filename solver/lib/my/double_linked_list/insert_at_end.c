/*
** EPITECH PROJECT, 2021
** insert_at_end.c
** File description:
** insert_at_end
*/

#include <stdlib.h>
#include "linked_list/double_linked_list.h"

void insert_at_end(node_t **head, node_t *new_node)
{
    node_t *tmp = *head;

    if (*head == NULL) {
        *head = new_node;
        return;
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new_node;
    new_node->prev = tmp;
}
