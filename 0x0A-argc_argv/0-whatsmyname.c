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
	char *programName = argv[0];
	char *baseName = NULL;
	char *extension = NULL;

	baseName = strrchr(programName, '\\');

	if (baseName == NULL)
	{
		baseName = programName;
	}
	else
	{
		baseName++;
	}

	extension = strrchr(baseName, '.');

	if (extension != NULL)
	{
		*extension = '\0';
	}
	printf("./%s\n", baseName);
	return (argc);
}
