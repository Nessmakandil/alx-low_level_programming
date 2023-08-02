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
	unsigned int i;
	
	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
