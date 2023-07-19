#include<stdio.h>
#include"main.h"
/**
 * _islower - print lowercase alphabets from a to z.
 *
 * Return: 1 if c is lowercase.
 *
 * Return: 0 otherwise.
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
