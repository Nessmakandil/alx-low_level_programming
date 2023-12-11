#include<stdio.h>
#include"main.h"
/**
 * _islower - print lowercase alphabets from a to z.
 *
 * @c: is the char to be checked
 *
 * Return: 1 if c is lowercase and 0 otherwise.
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
