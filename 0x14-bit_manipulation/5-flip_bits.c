#include "main.h"
/**
 * flip_bits - calculates the number of bits you would need to
 * flip to get from one number to another
 * @n: digit
 * @m: starting from 0 of the bit you want to get
 * Return: 1 if it worked, or -1 if an error occurred
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int index = 0;
	unsigned long int mask;

	while (!(index >= sizeof(unsigned long int) * 8))
	{
		mask = 1UL << index;
		if ((n & mask) != (m & mask))
		{
			count++;
		}
		index++;
	}
	return (count);
}
