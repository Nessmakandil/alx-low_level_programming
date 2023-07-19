#include<stdio.h>
#include"main.h"
/**
 *
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: number to be printed
 *
 */

void print_times_table(int n)
{
        int i, j;

	while (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
        	{
			for (j = 0; j <= n; j++)
        		{
				printf("%d", i*j);
				if (j != n)
					printf(", ");
			}
			printf("\n");
         	}
	}
}
