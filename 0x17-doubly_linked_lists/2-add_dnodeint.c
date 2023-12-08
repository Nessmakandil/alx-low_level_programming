#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning 
 * @head: pointer to the first element of the list
 * @n: new element
 * Return: new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
