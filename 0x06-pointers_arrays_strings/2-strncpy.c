#include "main.h"
/**
 * _strncpy -  work exactly like strncpy.
 *
 * @dest: Input string.
 *
 * @src: Input string.
 *
 * @n: Input Integer.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
        int count1, count2, i;

        count1 = 0;
        count2 = 0;

        while (dest[count1] != '\0')
                count1++;
        while (src[count2] != '\0')
                count2++;
	for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
		if (n > count2)
			dest[i] = '\0';
        }
        return (dest);
}
