#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: linked list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while(h != NULL) {
		count++;
		printf("[%u] ",h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n",h->str);
		}
		h = h->next;
	}
	return (count);
}
