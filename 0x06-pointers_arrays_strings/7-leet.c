#include "main.h"
/**
 * leet - encodes a string into 1337.
 *
 * @str: Input string.
 *
 * Return: A pointer to char.
 */

char *leet(char *str)
{
	int i, count;

	count = 0;

	while (str[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
                        str[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
                        str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
                        str[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	return (str);
}
