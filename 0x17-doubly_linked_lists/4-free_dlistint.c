#include "lists.h"
/**
 * free_dlistint - free the memory
 * @head: pointer to the first element of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
