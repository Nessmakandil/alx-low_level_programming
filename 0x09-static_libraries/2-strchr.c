#include "main.h"
/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to the first occurrence of the character c.
 * @c: char value.
 *
 * Return: pointer s.
 */

char *_strchr(char *s, char c)
{
	char *ptr = NULL;


	while (*s != '\0')
	{
		if (*s == c)
		{
			ptr = s;
			break;
		}
		s++;
	}
	if (*s == c)
		ptr = s;

	return (ptr);
}
