#include "lists.h"
/**
 * sum_listint - prints all the elements of a list_t list.
 * @head: linked list.
 * Return: the number of nodes.
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
    int sum = 0;

	current = head;

	if (current == NULL)
	{
		return (0);
	}
	while (current)
	{
        sum += current->n;
		current = current->next;
	}
    return (sum);
}