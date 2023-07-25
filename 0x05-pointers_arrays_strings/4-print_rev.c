#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @str: string to be printed.
 */

void print_rev(char *str)
{
	int i, count;

	count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	str--;
	for (i = count - 1; i >= 0; i--)
	{
		printf("%c", *str);
		str--;
	}
	printf("\n");
}
