#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: input string.
 * @s2: input string.
 * @n: input size.
 * 
 * Return: a pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int i = 0;
    unsigned int j = 0;

    if (n >= strlen(s2))
        concat = malloc(sizeof(s1) + strlen(s2));
    else 
        concat = malloc(strlen(s1) + n);

    if (concat == NULL)
        return (NULL);
    while (s1[i])
    {
        concat[i] = s1[i];
        i++; 
    }
    while (j < n && j < strlen(s2))
    {
        concat[i] = s2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    return (concat);
}
