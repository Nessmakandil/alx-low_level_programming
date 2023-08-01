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
	char *p = s;

	while (n-- > 0)
		*p++ = s;
	return s;
}
