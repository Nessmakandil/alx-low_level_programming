#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long long int x, i, j, count, prime;

	x = 612852475143;

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
	printf("%lld\n", prime);
	return (0);	
}
