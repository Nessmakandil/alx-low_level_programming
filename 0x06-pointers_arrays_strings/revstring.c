#include <stdio.h>
#include <stdlib.h>

/**
 * revstring - prints a string, in reverse, followed by a new line.
 *
 * @str: string to be printed.
 * 
 * Return: A pointer to char.
 */

char *revstring(char *str)
{
	int i, count;
	char *rev;
	
	count = 0;
	
	while(str[count] != '\0')
		count++;
	
	rev = (char *) malloc(count + 1);

	for (i = 0; i < count; i++)
	{
		rev[i] = str[count - i - 1];
	}
	return (rev);
}
