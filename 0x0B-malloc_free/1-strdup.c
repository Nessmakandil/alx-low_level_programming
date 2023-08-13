#include "main.h"
/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: input string.
 *
 * Return: output string.
 */

char *_strdup(char *str)
{
	int count = 0;
	int i = 0;
	char *ptr = NULL;

    if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;

	ptr = malloc(count + 1);

	if (ptr == NULL)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
