#include "lists.h"
/**
 * add_nodeint_end - a function that prints all the elements of a listint_t list.
 * @head: input list.
 * @n: new node value .
 * Return: new list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h = (listint_t *) malloc(sizeof(listint_t));
    listint_t *new = (listint_t *) malloc(sizeof(listint_t));
    
    if (h == NULL || new == NULL)
	{
		free(h);
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
	}
    return (h);
}