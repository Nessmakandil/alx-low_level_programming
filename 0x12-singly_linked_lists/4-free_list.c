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
	list_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
