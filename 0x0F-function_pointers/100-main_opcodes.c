#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the codes.
 *
 * @argc: number of parameters.
 * @argv: array of strings.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	unsigned char *ptr = (unsigned char *)main;
	int i = 0;
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	while (i < num_bytes)
	{
		if (i != 0)
		{
			printf(" ");
		}
		printf("%02x", ptr[i]);
		i++;
	}
	printf("\n");
	return 0;
}
