#include <stdio.h>
#include <string.h>
/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: count of argv.
 * @argv: string.
 *
 * Return: integer count of argc.
 */

int main(int argc, char *argv[])
{
	int i = 1;

	printf("./%s\n", *argv);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
