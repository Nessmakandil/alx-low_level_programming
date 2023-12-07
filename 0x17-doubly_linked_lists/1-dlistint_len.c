#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked.
 * @h: input list.
 * Return: Length of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
