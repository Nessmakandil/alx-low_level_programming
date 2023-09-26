#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 *
 * @a: input square matrix.
 * @size: input matrix size.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[(i + 1) * size - (i + 1)];
		j--;
	}
	printf("%d, %d\n", sum1, sum2);
}
