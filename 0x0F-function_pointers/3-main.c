#include "3-calc.h"
/**
 * main - check the code
 *
 * @argc: number of parameters.
 * @argv: array of strings.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	char *ch;
	int a, b;

	if (argc < 4)
	{
		printf("Error\n");
		exit (98);
	}

	ch = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (!(strcmp(ch, "+") == 0 || strcmp(ch, "-") == 0 || strcmp(ch, "*") == 0 
				|| strcmp(ch, "/") == 0 || strcmp(ch, "%") == 0))
	{
		printf("Error\n");
		exit (99);
	}
	if (b == 0 && (strcmp(ch, "/") == 0 || strcmp(ch, "%") == 0))
	{
		printf("Error\n");
		exit (100);
	}

	f = get_op_func(ch);
	printf("%d\n", f(a, b));
	return (0);
}
