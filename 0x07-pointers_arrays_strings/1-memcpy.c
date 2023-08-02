#include "main.h"
#include <string.h>
/**
 * _memcpy -  copies memory area.
 *
 * @dest: pointer to char.
 * @src: pointer to char.
 * @n: integer.
 *
 * Return: pointer to char dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, r;

	i = n;

	for (r = 0; r < i; r++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
