#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle.
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i)
				_putchar(' ');
			else 
				_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
