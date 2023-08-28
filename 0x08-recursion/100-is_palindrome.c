#include "main.h"
/**
 * is_palindrome -  A string is called a palindrome if
 * the reverse of the string is the same as the original one.
 * @s: input string.
 * Return: 1 for true, 0 for false.
 */

int is_palindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}