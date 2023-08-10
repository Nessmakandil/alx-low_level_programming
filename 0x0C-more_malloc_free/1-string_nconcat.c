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
    unsigned int count1 = 0;
    unsigned int count2 = 0;

    while (s1[count1])
        count1++;
    while (s2[count2])
        count2++;
    if (n >= count2)
        concat = malloc(count1 + count2 + 1);
    else 
        concat = malloc(count1 + n + 1);

    if (concat == NULL)
        return (NULL);
    while (s1[i])
    {
        concat[i] = s1[i];
        i++; 
    }
    while (j < n && j < count2)
    {
        concat[i] = s2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    return (concat);
}
