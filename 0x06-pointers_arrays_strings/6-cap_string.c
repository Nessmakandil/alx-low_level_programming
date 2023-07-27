#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: Input string.
 *
 * Return: A pointer to char array.
 */

char *cap_string(char *str)
{
	int i, count;

	count = 0;

	while (str[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		if ((str[i] == ',' || str[i] == ';' || str[i] ==  '.' || str[i] == '!' || str[i] == '?' || str[i] ==  ')' || str[i] == '}') && (str[i + 1] == ' ' && str[i + 2] >= 'a' && str[i + 2] <= 'z'))
			str[i + 2] = str[i + 2] - 32;
		else if ((str[i] == '\t' || str[i] == '\n' || str[i] == '.' || str[i] == '\"' || str[i] == '(' || str[i] == '{' || str[i] == ' ') && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
