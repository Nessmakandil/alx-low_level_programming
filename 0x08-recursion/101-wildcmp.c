#include "main.h"
/**
 * helper -  A string is called a palindrome if
 * the reverse of the string is the same as the original one.
 * @s1: input string.
 * @s2: input string.
 * Return: 1 for true, 0 for false.
 */
int helper(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
    {
        return (1);
    }
    if (*s2 == '*')
    {
        if (*s1 == '\0')
            return (helper(s1, s2 + 1));
        else
            return (helper(s1 + 1, s2) || helper(s1, s2 + 1));
    }
    if (*s1 == *s2)
    {
        return (helper(s1 + 1, s2 + 1));
    }
    return (0);
}
/**
 * wildcmp -  A string is called a palindrome if
 * the reverse of the string is the same as the original one.
 * @s1: input string.
 * @s2: input string.
 * Return: 1 for true, 0 for false.
 */
int wildcmp(char *s1, char *s2)
{
    return (helper(s1, s2));
}

