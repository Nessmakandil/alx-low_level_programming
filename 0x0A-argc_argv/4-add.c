#include "main.h"
/**
 * main - a program that multiplies two numbers.
 *
 * @argc: count of argv.
 * @argv: string.
 *
 * Return: 0 if success, 1 o.w.
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int i = 1;
	int c;
	
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		c = atoi(argv[i]);
		if (c == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
