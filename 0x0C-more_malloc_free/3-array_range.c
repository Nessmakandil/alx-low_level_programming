#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: input size.
 *
 * Return: a pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
