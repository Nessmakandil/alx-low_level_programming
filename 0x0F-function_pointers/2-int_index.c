#include "function_pointers.h"
/**
 * int_index - a function that prints a name.
 *
 * @array: name.
 * @size: number.
 * @cmp: function.
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
