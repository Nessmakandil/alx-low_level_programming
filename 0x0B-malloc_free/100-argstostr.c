#include "main.h"
#include <string.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 *
 * @ac: the number of arguments.
 * @av: the arguments of the program.
 *
 * Return: concatinated string.
 */

char *argstostr(int ac, char **av)
{
	int i, x;
	unsigned int j;
	unsigned int sum = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		sum = sum + strlen(av[i]) + 1;
	}

	ptr = malloc(sum + 1);
	x = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (j < strlen(av[i]))
		{
			ptr[x] = av[i][j];
			j++;
			x++;
		}
		ptr[x] = '\n';
		x++;
	}
	return (ptr);
}
