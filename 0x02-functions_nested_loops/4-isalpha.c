#include<stdio.h>
#include"main.h"
/**
 * _isalpha - checks if a character is an alphabet from a to z.
 *
 * @c: is the char to be checked
 *
 * Return: 1 if c is an alphabet and 0 otherwise.
 *
 */

int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
