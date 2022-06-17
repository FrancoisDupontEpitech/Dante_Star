/*
** EPITECH PROJECT, 2021
** linked_list.h
** File description:
** linked_list header
*/

#ifndef LINKED_LIST_H_
    #define LINKED_LIST_H_

struct node {
    int value;
    struct node *next;
};
typedef struct node node_t;

node_t *create_new_node(int value);
node_t *find_node(node_t *head, int value);
void insert_at_head(node_t **head, node_t *node_to_insert);
void insert_at_end(node_t **head, node_t *node_to_insert);
void insert_after_node(node_t *node_to_insert_after, node_t *newnode);
void display_list(node_t *head);
void free_list(struct node *head);
int linked_list(int ac, char **av);

#endif /* !LINKED_LIST_H_ */
