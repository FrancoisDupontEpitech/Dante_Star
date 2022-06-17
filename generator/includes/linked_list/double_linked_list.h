/*
** EPITECH PROJECT, 2021
** double_linked_list.h
** File description:
** double_linked_list header
*/

#ifndef DOUBLE_LINKED_LIST_H_
    #define DOUBLE_LINKED_LIST_H_

typedef struct node {
    char *name;
    char *value;
    struct node *next;
    struct node *prev;
} node_t;

node_t *create_linked_list(int ac, char **av);
node_t *create_new_node(char *value);
node_t *find_node(node_t *head, char *name);
void insert_at_head(node_t **head, node_t *node_to_insert);
void insert_at_end(node_t **head, node_t *node_to_insert);
void insert_after_node(node_t *node_to_insert_after, node_t *newnode);
void display_list(node_t *head);
void display_reverse_list(node_t *node);
void free_list(struct node *head);

#endif /* !DOUBLE_LINKED_LIST_H_ */
