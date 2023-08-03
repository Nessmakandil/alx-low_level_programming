#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: input number.
 *
 * Return: int factorial.
 */

int factorial(int n)
{
	int f = 1;

	if (n < 0)
		return (-1);
	else if (n > 0)
		f = n * factorial(n - 1);
	return (f);
}
