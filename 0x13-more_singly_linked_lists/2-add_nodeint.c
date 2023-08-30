#include "lists.h"
/**
 * add_nodeint - a function that prints all the elements
 * of a listint_t list.
 * @head: input list.
 * @n: new node value .
 * Return: new list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h = (listint_t *) malloc(sizeof(listint_t));
	if (h == NULL)
	{
		return (NULL);
	}
	h->n = n;
	h->next = *head;
	*head = h;
	return (h);
}