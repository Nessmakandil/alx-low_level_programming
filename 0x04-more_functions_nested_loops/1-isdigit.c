#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 * @c: number to be checked.
 *
 * Return: 1 if c is a digit and 0 O.W.
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
