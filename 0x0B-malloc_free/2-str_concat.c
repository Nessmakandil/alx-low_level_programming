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
	int i = 0;
    int j = 0;
    int n = 0;
    int m = 0;
    char *ptr;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	ptr = malloc(i + j + 1);

	if (ptr == NULL)
		return (NULL);
	while (n < i || i == 0)
	{
		ptr[n] = s1[n];
		n++;
	}
	while (m < j || j == 0)
	{
		ptr[n] = s2[m];
		m++;
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
