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
	char *c = NULL;
	unsigned int len;
	unsigned int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		c = argv[i];
		len = strlen(c);		
		for (j = 0; j < len; j++)
		{
			if (!isdigit(c[j]))
			{
				printf("Error\n");
				return (1);
			}
		}		
		add = add + atoi(c);
	}
	printf("%d\n", add);
	return (0);
}
