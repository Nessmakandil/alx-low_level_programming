#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long int x, i, j, count, prime;

	x = 1231952;

	for (i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			count = 0;
			for (j = 1; j <= i; j++)
			{
				if (i % j == 0)
				{
					count++;
				}
			}
			if (count == 2)
				 prime = i; 
		}
	}
	printf("%ld\n", prime);
	return (0);	
}
