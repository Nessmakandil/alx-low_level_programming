#include "lists.h"
/**
 * free_listint2 - prints all the elements of a list_t list.
 * @head: linked list.
 * Return: the number of nodes.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
    int val;

	current = *head;
    val = current->n;

	if (current != NULL)
	{
		*head = current->next;
        free(current);
        return (val);
	}
    else
    {
        return (0);
    }
    
}