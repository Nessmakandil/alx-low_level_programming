#include "main.h"
/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 *
 * @dest: Input string.
 *
 * @src: Input string.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, count1, count2;

	count1 = 0;
	count2 = 0;

	while (dest[count1] != '\0')
		count1++;
	while (src[count2] != '\0')
		count2++;
	for (i = 0; i <= count2; i++)
	{
		dest[count1 + i] = src[i];
	}
	return (dest);
}
