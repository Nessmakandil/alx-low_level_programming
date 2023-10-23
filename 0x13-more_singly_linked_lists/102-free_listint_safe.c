#include "lists.h"
/**
 * free_listint_safe - prints all the elements of a list_t list.
 * @h: linked list.
 * Return: the number of nodes.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *next;
    size_t count = 0;

    if (h == NULL || *h == NULL)
        return (count);

    current = *h;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
        count++;

        if (current >= next)
            break;
    }

    *h = NULL;

    return (count);
}
