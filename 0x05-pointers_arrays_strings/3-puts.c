#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 *
 * @str: string to be printed.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}

