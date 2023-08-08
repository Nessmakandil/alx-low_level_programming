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
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	
	mul = atoi(argv[1]) * atoi(argv[2]);
	
	printf("%d\n", mul);

	return (0);
}
