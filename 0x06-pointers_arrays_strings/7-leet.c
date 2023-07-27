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
	int i, j;
	char *s1, *s2;
	
	s1 = "aAeEoOtTlL";
	s2 = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
	}
	return (str);
}
