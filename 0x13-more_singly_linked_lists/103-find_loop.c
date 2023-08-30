#include "lists.h"
/**
 * find_listint_loop - prints all the elements of a list_t list.
 * @head: linked list.
 * Return: the number of nodes.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow, *fast;

    if (head == NULL)
        return (NULL);

    slow = head;
    fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            slow = head;

            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            return (slow);
        }
    }
    return (NULL);
}
