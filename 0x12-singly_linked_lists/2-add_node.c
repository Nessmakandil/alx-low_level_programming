#include "lists.h"
/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 *
 * @h: linked list.
 *
 * Return: the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *lk = (struct list_t*) malloc(sizeof(list_t));
    lk->str = str;
    lk->len = strlen(str);
    lk->next = head;
	return (lk);
}