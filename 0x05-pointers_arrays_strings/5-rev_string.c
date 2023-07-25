#include "main.h"

/**
 * rev_string - prints a string, in reverse.
 *
 * @str: string to be printed.
 */

void rev_string(char *s)
{
        int i, count;

        count = 0;

        while (*s != '\0')
        {
                count++;
                s++;
        }
        s--;
        for (i = count - 1; i >= 0; i--)
        {
                printf("%c", *s);
                s--;
        }
        printf("\n");
}
