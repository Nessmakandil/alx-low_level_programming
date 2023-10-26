#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars.
 * Return: integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ch, num = 0, i = 0, count = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[count])
	{
		count++;
	}
	count--;
	while (b[i])
	{
		ch = b[i] - '0';
		if (ch > 1)
		{
			return (0);
		}
		num = num + ch * pow(2, count);
		count--;
		i++;
	}
	return (num);
}
