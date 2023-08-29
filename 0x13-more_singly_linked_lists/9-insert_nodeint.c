#include "lists.h"
/**
 * insert_nodeint_at_index - prints all the elements of a list_t list.
 * @head: linked list.
 * @idx: new item index.
 * @n: new item value.
 * Return: the number of nodes.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
    unsigned int i = 0;

	current = *head;
    new = (listint_t *) malloc(sizeof(listint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;

    if (idx == 0) {
        new->next = *head;
        *head = new;
        return (new);
    }
	if (current == NULL && idx == 0)
	{
        new->next = NULL;
		return (new);
	}
    else if (current == NULL && idx != 0)
	{
		return (NULL);
	}
	while (current && i < idx - 1)
	{
        current = current->next;
        i++;
	}
    if (current == NULL)
    {
        free(new);
        return NULL;
    }

    new->next = current->next;
    current->next = new;  
    return (new);
}