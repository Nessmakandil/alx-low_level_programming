#include "main.h"

/**
 * puts_half - print the second half of the string.
 *
 * @str: input string.
 */

void puts_half(char *str)
{
	int i, j, n, count;
	char *newstr;

	count = 0;
	j = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
		n = count / 2;
	else 
		n = count / 2 - 1;
	
	newstr = (char *) malloc((count - n + 1) * sizeof(char));

	for (i = n; i <= count; i++)
	{
		newstr[j] = str[i];
		j++;
	}
	printf("%s\n", newstr);

}
