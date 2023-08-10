#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: input size.
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	if ((void*)malloc(b) == NULL)
		exit (98);
	return ((void*)malloc(b));
}
