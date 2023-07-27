#include "main.h"
/**
 * _strncat - similar to the _strcat,
 * it will use at most n bytes from src,
 * src does not need to be null-terminated
 * if it contains n or more bytes.
 *
 * @dest: Input string.
 *
 * @src: Input string.
 *
 * @n: Input Integer.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1, count2, i;

	count1 = 0;
	count2 = 0;

	while (dest[count1] != '\0')
		count1++;
	while (src[count2] != '\0')
		count2++;
	if (n > count2)
		n = count2;
	for (i = 0; i < n; i++)
	{
		dest[count1 + i] = src[i];
	}
	return (dest);
}
