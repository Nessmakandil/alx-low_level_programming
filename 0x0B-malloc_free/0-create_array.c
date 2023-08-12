#include "main.h"
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * 
 * @size: array length.
 * @c: initialization value.
 * Return: NULL if size is zero or negative, array of chars o.w.
*/

char *create_array(unsigned int size, char c)
{
    char *ptr = (char*) malloc(sizeof(char) * size);
    int i = 0;

    if (size == 0 || ptr == NULL)
        return (NULL);
    while (i < size)
    {
        ptr[i] = c;
        i++;
    }
    return (ptr);
}