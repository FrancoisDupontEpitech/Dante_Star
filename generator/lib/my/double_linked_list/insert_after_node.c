/*
** EPITECH PROJECT, 2021
** insert_after_node.c
** File description:
** insert_after_node
*/

#include <stdlib.h>
#include "linked_list/double_linked_list.h"

void insert_after_node(node_t *node_to_insert_after, node_t *newnode)
{
    newnode->next = node_to_insert_after->next;
    newnode->prev = node_to_insert_after;
    node_to_insert_after->next = newnode;
}
