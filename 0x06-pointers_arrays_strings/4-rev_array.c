#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: Input array.
 *
 * @n: Input array length.
 */

void reverse_array(int *a, int n)
{
	int i, rev;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = rev;
	}
}
