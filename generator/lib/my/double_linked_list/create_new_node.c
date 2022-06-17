/*
** EPITECH PROJECT, 2021
** create_new_node.c
** File description:
** create_new_node
*/

#include <stdlib.h>
#include "linked_list/double_linked_list.h"

char *envstr_to_name(char *envstr)
{
    int i = 0;
    char *name = NULL;

    while (envstr[i] != '\0' && envstr[i] != '=')
        i++;
    name = malloc(sizeof(char) * (i + 1));
    for (int c = 0; c < i; c++)
        name[c] = envstr[c];
    name[i] = '\0';
    return name;
}

int count_value_len(char *envstr, int *i, int *c)
{
    while (envstr[*i] != '\0') {
        (*i)++;
        if (envstr[*i] == '=') {
            (*i)++;
            break;
        }
    }
    while (envstr[*i + *c] != '\0')
        (*c)++;
}

char *envstr_to_value(char *envstr)
{
    int i = 0;
    int c = 0;
    char *value = NULL;

    count_value_len(envstr, &i, &c);
    value = malloc(sizeof(char) * (c + 1));
    if (value == NULL)
        return NULL;
    for (int c = 0; envstr[i + c] != '\0'; c++)
        value[c] = envstr[i + c];
    value[c] = '\0';
    return value;
}

node_t *create_new_node(char *envstr)
{
    node_t *res = malloc(sizeof(node_t));

    res->name = envstr_to_name(envstr);
    res->value = envstr_to_value(envstr);
    res->prev = NULL;
    res->next = NULL;
    return res;
}
