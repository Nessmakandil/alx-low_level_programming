#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 *
 * @str: input string.
 *
 * Return: A pointer to char.
 */

char *rot13(char *str)
{
	char *letter, *code;
	int i, j;

	letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = code[j];
				break;
			}

		}
	}
	return (str);
}
