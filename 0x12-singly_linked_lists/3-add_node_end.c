#include "lists.h"
/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 *
 * @head: pointer to a linked list.
 * @str: new input.
 *
 * Return: the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *lk = (list_t *) malloc(sizeof(list_t));
    if (lk == NULL)
    {
        return (NULL);
    }
    lk->str = (char *) malloc(strlen(str) + 1);
    if (lk->str == NULL)
    {
        return (NULL);
    }    
    strcpy(lk->str, str);
    lk->len = strlen(str);
    lk->next = *head;
    *head = lk;
	return (lk);
}