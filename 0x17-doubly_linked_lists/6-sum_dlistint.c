#include "lists.h"
/**
 * sum_dlistint - adds all nodes
 * @head: pointer to the first element of the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
