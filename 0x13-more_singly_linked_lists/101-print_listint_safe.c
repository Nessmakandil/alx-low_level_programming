#include "lists.h"
/**
 * print_listint_safe - a function that prints all the elements of a listint_t list.
 * @head: input list.
 * Return: number of elements.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current;
    size_t count = 0;

    if (head == NULL)
        exit(98);

    current = head;

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;
        current = current->next;
    }

    return (count);
}
