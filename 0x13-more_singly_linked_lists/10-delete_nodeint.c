#include "lists.h"
/**
 * insert_nodeint_at_index - prints all the elements of a list_t list.
 * @head: linked list.
 * @index: item index.
 * Return: the number of nodes.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
    unsigned int i = 0;

	current = *head;

	if (current == NULL)
	{
		return (-1);
	}
    if (index == 0)
	{
        *head = current->next;
        free (current);
		return (1);
	}
	while (current && i < index - 1)
	{
        current = current->next;
        i++;
	}
    if (current == NULL)
    {
        return (-1);
    }

    temp = current->next;
    current->next = temp->next;
    free(temp);  
    return (1);
}