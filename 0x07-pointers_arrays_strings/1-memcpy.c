#include "main.h"
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
	unsigned int i;

	i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}
