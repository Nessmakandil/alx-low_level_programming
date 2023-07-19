#include<stdio.h>
#include"main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * @n: is the number to be checked
 *
 * Return: 1 if n is positive, 0 if n is zero and -1 if n is negative.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		puts("+");
		return (1);
	}
	else if (n == 0)
	{
		puts("0")
		return (0);
	}
	else
	{
		puts("-");
		return (-1);
	}
}
