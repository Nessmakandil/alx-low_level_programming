#include "main.h"

/**
 * rev_string - prints every other character of a string, 
 * starting with the first character, followed by a new line.
 *
 * @str: string to be printed.
 */

void puts2(char *str)
{
        int i, count;

        count = 0;

        while (str[count] != '\0')
        {
                count++;
        }
        for (i = 0; i < count; i = i + 2)
        {
		printf("%c", str[i]);
        }
	printf("\n");
}

