#include "main.h"
/**
 * _realloc - a function that reallocates
 * a memory block using malloc and free.
 *
 * @ptr: input pointer.
 * @old_size: input size.
 * @new_size: output size.
 *
 * Return: a pointer to the new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
		free(ptr);
	}
	return (new_ptr);
}
