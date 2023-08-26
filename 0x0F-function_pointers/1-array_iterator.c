#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 *
 * @array: name.
 * @size: number.
 * @action: function.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

	if (action == NULL)
	{
		return;
	}
    for (i = 0; i < size; i++)
    {
        (*action)(array[i]);
    }	
}