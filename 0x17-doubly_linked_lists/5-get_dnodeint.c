#include "lists.h"
/**
 * get_dnodeint_at_index - returns an element in position od index
 * @head: pointer to the first element of the list
 * @index: element index
 * Return: list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
