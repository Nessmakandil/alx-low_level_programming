#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * 
 * @s1: first input.
 * @s2: second input.
 * 
 * Return: string.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, n, m = 0;
    char *ptr;

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	ptr = (char*) malloc(i + j + 1);

	if (ptr == NULL)
		return (NULL);
	while (n < i)
	{
		ptr[n] = s1[n];
		n++;
	}
	while (m < j)
	{
		ptr[n] = s2[m];
		m++;
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
