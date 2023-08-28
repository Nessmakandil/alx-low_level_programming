#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a linked listint_t list.
 * @h: input list.
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
    }