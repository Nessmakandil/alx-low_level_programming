#include "lists.h"
/**
 * free_listint2 - prints all the elements of a list_t list.
 * @head: linked list.
 * Return: the number of nodes.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
		free(current);
	}
}