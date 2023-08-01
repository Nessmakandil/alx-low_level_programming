#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: char pointer.
 * @accept: char pointer.
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int len = 0;
    int found = 0;
    char *p = NULL;

    while (*s != '\0')
    {
        found = 0;
        for (p = accept; *p != '\0'; p++)
	{
            if (*s == *p)
	    {
                len++;
                found = 1;
                break;
            }
        }
        if (!found)
	{
            break;
        }
        s++;
    }

    return len;
}
