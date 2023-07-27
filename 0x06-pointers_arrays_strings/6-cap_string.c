#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: Input string.
 *
 * Return: A pointer to char array.
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i - 1] == ',' ||\
		    str[i - 1] == ';' ||\
		    str[i - 1] == '.' ||\
		    str[i - 1] == '!' ||\
		    str[i - 1] == '?' ||\
		    str[i - 1] == ')' ||\
		    str[i - 1] == '}' ||\
		    str[i - 1] == '\t' ||\
		    str[i - 1] == '\n' ||\
		    str[i - 1] == '"' ||\
		    str[i - 1] == ' ') &&
		   (str[i] >= 'a' && 
		    str[i] <= 'z'))
			str[i] = str[i] - 32;

	}
	return (str);
}
