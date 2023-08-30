#include "lists.h"
/**
 * reverse_listint - prints all the elements of a list_t list.
 * @head: linked list.
 * Return: the number of nodes.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = NULL, *temp = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
    while((*head)->next)
    {
        temp = (*head)->next;
        (*head)->next = curr;
        curr = *head;
        *head = temp;
    }
    (*head)->next = curr;
    return (curr);
}