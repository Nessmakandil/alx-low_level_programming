#include "main.h"
/**
 * _strpbrk -  locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 *
 * @s: input string.
 * @accept: string.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = NULL;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
				return (s);
		}
		s++;
	}
	return ('\0');
}
