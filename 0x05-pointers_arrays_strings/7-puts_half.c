#include "main.h"

/**
 * puts_half - print the second half of the string.
 *
 * @str: input string.
 */

void puts_half(char *str)
{
	int i, n, count;

	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
		n = count / 2;
	else 
		n = (count - 1) / 2;
	for (i = n; i <= count; i++)
		printf("%c", str[i]);
	printf("\n");

}
