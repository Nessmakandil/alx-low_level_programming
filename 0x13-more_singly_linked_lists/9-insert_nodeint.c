#include "lists.h"
/**
 * sum_listint - prints all the elements of a list_t list.
 * @head: linked list.
 * Return: the number of nodes.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new, *temp;
    unsigned int i = 0;

	current = *head;
    temp = current;
    new = (listint_t *) malloc(sizeof(listint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;

	if (current == NULL && idx == 0)
	{
        new->next = NULL;
		return (new);
	}
    else if (current == NULL && idx != 0)
	{
		return (NULL);
	}
	while (current)
	{
        if (i == idx - 1)
        {
            current->next = new;
            new->next = temp;
            break; 
        }
        current = current->next;
        temp = current->next;
        i++;
	}  
    return (new);
}