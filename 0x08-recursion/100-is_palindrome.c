#include "main.h"
/**
 * helper -  A string is called a palindrome if
 * the reverse of the string is the same as the original one.
 * @s: input string.
 * @left: position.
 * @right: position.
 * Return: 1 for true, 0 for false.
 */
int helper(char *s, int left, int right)
{
    if (left >= right)
    {
        return 1;
    }
    if (s[left] != s[right])
    {
        return 0;
    }
    return helper(s, left + 1, right - 1);
}
/**
 * is_palindrome -  A string is called a palindrome if
 * the reverse of the string is the same as the original one.
 * @s: input string.
 * Return: 1 for true, 0 for false.
 */
int is_palindrome(char *s)
{
    int left = 0;
    int right = strlen(s) - 1;

    return helper(s, left, right);
}