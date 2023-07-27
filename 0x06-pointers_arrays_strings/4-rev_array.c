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
	int i,j, rev;

	rev = a[0];
	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		j--;
	}
}
