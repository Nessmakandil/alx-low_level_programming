#include<stdio.h>
#include"main.h"
/**
 *  print_alphabet - print lowercase alphabets from a to z.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		printf("%c", c);
	}
	printf("\n");
}
