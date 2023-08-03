#include "main.h"
/** _sqrt_recursion - a function that returns the natural square root of a number.
 *
 * @n: Input Number.
 *
 * Return: Int type.
 */

int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (helper(n, i + 1));
}
int _sqrt_recursion(int n)
{
	int ones = n - (n / 10) * 10;

	if (n == 1 || n == 0) 
		return (n);
	if (n < 0 || ones == 2 || ones == 3 || ones == 7 || ones == 8)
		return (-1);	
	return (helper(n, 0));
}
