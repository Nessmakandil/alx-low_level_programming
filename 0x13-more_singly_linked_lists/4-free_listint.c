#include "lists.h"
/**
 * free_listint - prints all the elements of a list_t list.
 * @head: linked list.
 * Return: the number of nodes.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;

	while (current != NULL)
	{
		current = current->next;
		free(current);
	}
}