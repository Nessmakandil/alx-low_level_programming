#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: Input string.
 *
 * Return: pointer to char.
 */

char *string_toupper(char *str)
{
	int i, count;

	count = 0;

	while (str[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
