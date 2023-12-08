#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node of index
 * @head: pointer to the first element of the list
 * @index: element index
 * Return: new list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int count = 0;
    if (*head == NULL)
    {
        return (-1);
    }
    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }
        free(current);
        return (1);
    }
    while (count < index)
    {
        if (current == NULL)
        {
            return (-1);
        }
        current = current->next;
        count++;
    }
    if (current == NULL)
    {
        return (-1);
    }
    if (current->prev != NULL)
    {
        current->prev->next = current->next;
    }
    if (current->next != NULL)
    {
        current->next->prev = current->prev;
    }
    free(current);
    return (1);
}