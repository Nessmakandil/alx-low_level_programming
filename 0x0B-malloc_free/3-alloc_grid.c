#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to a
 * 2dimensional array of integers.
 *
 * @width: integer.
 * @height: integer.
 *
 * Return: pointer to pointer arrary.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(sizeof(int) * width);

		if (ptr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ptr[x]);
			free(ptr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	}
	return (ptr);
}
