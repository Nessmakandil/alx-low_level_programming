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
    list_t *lk = (list_t *) malloc(sizeof(list_t));
    list_t *ik = (list_t *) malloc(sizeof(list_t));

	if (lk == NULL || ik == NULL)
	{
        free(lk);
        free(ik);
		return (NULL);
	}
	if (str == NULL)
	{
		lk->str = strdup("(nil)");
	}
	else
	{
		lk->str = strdup(str);
	}
	lk->len = strlen(str);
	lk->next = NULL;
    if (*head == NULL)
    {
        *head = lk;
    }
    else
    {
        ik = *head;
        while (ik->next != NULL)
        {
            ik = ik->next;
        }
        ik->next = lk;
    }
    return (lk);
}