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
		printf("%d", (n)%10);
		return (n%10);
	}
	else
	{
		printf("%d", (-1*n)%10);
                return ((-1*n)%10);
	}
}
