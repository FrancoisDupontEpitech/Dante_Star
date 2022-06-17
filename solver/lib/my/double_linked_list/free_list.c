/*
** EPITECH PROJECT, 2021
** free_list.c
** File description:
** free_list
*/

#include <stdlib.h>
#include "linked_list/double_linked_list.h"

void free_list(struct node *head)
{
    struct node *tmp = NULL;

    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp->name);
        free(tmp->value);
        free(tmp);
    }
}
