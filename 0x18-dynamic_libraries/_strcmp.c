#include "main.h"
/**
 * _strcmp -  work exactly like strcmp.
 *
 * @s1: Input string.
 *
 * @s2: Input string.
 *
 * Return: An integer.
 */

int _strcmp(char *s1, char *s2)
{
	int count;

	count = 0;

	while (s1[count] != '\0' && s2[count] != '\0' && s1[count]  == s2[count])
		count++;
	return (s1[count] - s2[count]);
}

