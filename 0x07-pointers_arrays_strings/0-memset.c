#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to char.
 * @b: constant byte.
 * @n: number of bytes.
 *
 * Return: pointer to char s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return s;
}
