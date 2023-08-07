#include "main.h"

/**
 * infinite_add - adds two numbers.
 *
 * @n1: input number
 *
 * @n2: input number
 *
 * @r: the buffer that the function will use to store the result
 *
 * @size_r: buffer size.
 *
 * Return: A pointer to char.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, x, num1, num2, sum, of, count1, count2;
	char ch1;

	count1 = 0;
	count2 = 0;
	of = 0;
	x = 0;
	sum = 0;

	while (n1[count1] != '\0')
		count1++;
	while (n2[count2] != '\0')
		count2++;

	i = count1 - 1;
	j = count2 - 1;

	while (i >= 0)
	{
		num1 = n1[i] - '0';
		i--;
		if (j >= 0)
		{
			num2 = n2[j] - '0';
			j--;
		}
		else 
			num2 = 0;
		sum = num1 + num2 + of;
		of = sum / 10;
		ch1 = sum - (sum / 10) * 10 + '0'; 
		if (x <= size_r)
		{
			r[x] = ch1;
			x++;
		}

	}
	ch1 = of + '0';
	r[x] = ch1;
	while (x < size_r)
	{
		r[x] = '\0';
		x++;
	}
	return (revstring(r));
}
