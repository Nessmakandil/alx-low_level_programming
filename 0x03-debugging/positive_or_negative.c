#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - Entry point
 *
 */

void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
