#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 * Return: 1 if c is uppercase and 0 O.W.
 */

int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}
