#include "main.h"
/**
 * _strlen - computes the length of a string.
 *
 * @s: the input string.
 *
 * Return: returns the length of a string.
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);

}
