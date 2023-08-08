#include <stdio.h>
#include <string.h>

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
