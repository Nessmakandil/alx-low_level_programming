#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_error_exit - a program that multiplies two numbers.
 */
void print_error_exit(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * check_input - a program that multiplies two numbers.
 *
 * @num: num1.
 *
 */
void check_input(char *num)
{
	int len = strlen(num);
	int i;

	for (i = 0; i < len; i++)
	{
		if (num[i] < '0' || num[i] > '9')
		{
			print_error_exit();
		}
	}
}
/**
 * multiply - a program that multiplies two numbers.
 *
 * @num1: num1.
 * @num2: num2.
 *
 */
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int result_len = len1 + len2;
	int *result = calloc(result_len, sizeof(int));
	int i, j;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int digit1 = num1[i] - '0';
			int digit2 = num2[j] - '0';
			int product = digit1 * digit2;
			int pos1 = i + j;
			int pos2 = i + j + 1;

			product += result[pos2];
			result[pos1] += product / 10;
			result[pos2] = product % 10;
		}
	}
	i = 0;
	while (i < result_len && result[i] == 0)
	{
		i++;
	}
	if (i == result_len)
	{
		printf("0\n");
	}
	else
	{
		for (; i < result_len; i++)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}
}
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
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3)
	{
		print_error_exit();
	}
	check_input(num1);
	check_input(num2);
	multiply(num1, num2);
	return 0;
}
