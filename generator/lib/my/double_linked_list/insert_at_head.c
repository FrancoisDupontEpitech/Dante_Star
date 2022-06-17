/*
** EPITECH PROJECT, 2021
** insert_at_head.c
** File description:
** insert_at_head
*/

#include <stdlib.h>
#include "linked_list/double_linked_list.h"

void insert_at_head(node_t **head, node_t *new_node)
{
    new_node->next = *head;
    new_node->prev = NULL;
    *head = new_node;
}
