#include<stdio.h>
#include"main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 *
 * @n: is the number to be checked
 *
 * Return: the value of the last digit.
 *
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (int(n%10));
	}
	else
	{
                return (int((-1*n)%10));
	}
}
