#include "lists.h"
/**
 * get_nodeint_at_index - prints all the elements of a list_t list.
 * @head: linked list.
 * @index: linked list.
 * Return: the number of nodes.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
    unsigned int i = 0;

	current = head;

	if (current == NULL)
	{
		return (current);
	}
	while (i < index)
	{
		current = current->next;
		i++;
	}
	if (i != index)
	{
		return (NULL);
	}
    return (current);
}