#include "main.h"

/**
 * rev_string - prints a string, in reverse.
 *
 * @str: string to be printed.
 */

void rev_string(char *s)
{
        int i, count;
	char str = s[0];

        count = 0;

        while (s[count] != '\0')
        {
                count++;
        }
        for (i = 0; i < count; i++)
        {
		count--;
		str = s[i];
		s[i] = s[count];
		s[count] = str;
	}
}
