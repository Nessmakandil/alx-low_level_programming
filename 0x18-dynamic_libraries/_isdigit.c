#include "main.h"
/**
 * _isdigit - checks for digit character.
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
