#include "main.h"
int helper(int n, int i);

/**
 * is_prime_number - finds if a number is prime or not.
 *
 * @n: Input integer.
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (helper(n, n) == 2)
		return (1);
	return (0);
}

/**
 * helper - finds if a number is prime or not.
 *
 * @n: Input integer.
 * @i: iterator.
 *
 * Return: number of factors.
 */

int helper(int n, int i)
{
	if (i < 1)
		return (0);
	if (n % i == 0)
		return 1 + helper(n, i - 1);
	return helper(n, i - 1);
}
