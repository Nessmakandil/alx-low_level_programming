#include<stdio.h>
#include"main.h"
/**
 * print_alphabet_x10 - print lowercase alphabets from a to z - 10 times.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; ++c)
		{
			printf("%c", c);
		}
		printf("\n");
	}
}
