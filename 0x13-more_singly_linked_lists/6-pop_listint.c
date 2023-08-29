#include "lists.h"
/**
 * pop_listint - prints all the elements of a list_t list.
 * @head: linked list.
 * Return: the number of nodes.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
    int val;

	current = *head;
    val = current->n;

	if (current != NULL)
	{
		*head = current->next;
        free(current);
	}
    return (val);
}
