#include "lists.h"
/**
 * add_node_end - a function that adds a new node
 * at the beginning of a list_t list.
 *
 * @head: pointer to a linked list.
 * @str: new input.
 *
 * Return: the number of nodes.
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *current;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->str = strdup(str);
    if (str == NULL)
    {
        new_node->str = strdup("(nil)");
    }

    new_node->len = (new_node->str != NULL) ? strlen(new_node->str) : 0;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }

    return (new_node);
}