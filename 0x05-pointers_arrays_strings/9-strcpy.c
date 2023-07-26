#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: Empty buffer.
 *
 * @src: Input String.
 *
 * Return: char pointer.
 */

char *_strcpy(char *dest, char *src)
{
	int i, count;

	count = 0;

	while (src[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
		dest[i] = src[i];

	dest[i++] = '\0';
	return (dest);
}
