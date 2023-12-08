#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: pointer to the first element of the list
 * @idx: element index
 * @n: new value
 * Return: new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int count = 0;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    dlistint_t *current;
    
    if (new_node == NULL)
    {
        return NULL;
    }

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (*h == NULL && idx != 0)
    {
        free(new_node);
        return (NULL);
    }

    if (idx == 0)
    {
        new_node->next = *h;
        if (*h != NULL)
        {
            (*h)->prev = new_node;
        }
        *h = new_node;
    }
    else
    {
        current = *h;
        while (count < idx - 1)
        {
            if (current == NULL)
            {
                free(new_node);
                return (NULL);
            }
            current = current->next;
            count++;
        }

        if (current == NULL)
        {
            free(new_node);
            return (NULL);
        }

        new_node->next = current->next;
        new_node->prev = current;

        if (current->next != NULL)
        {
            current->next->prev = new_node;
        }
        current->next = new_node;
    }
    return (new_node);
}