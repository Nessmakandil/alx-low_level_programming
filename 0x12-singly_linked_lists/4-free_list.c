#include "lists.h"
/**
 * free_list - prints all the elements of a list_t list.
 *
 * @head: linked list.
 *
 * Return: the number of nodes.
 */

void free_list(list_t *head)
{
    free(head->str);
    free(head);
}