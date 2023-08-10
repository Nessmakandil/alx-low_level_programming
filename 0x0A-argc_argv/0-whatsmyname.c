#include "main.h"
/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: count of argv.
 * @argv: string.
 *
 * Return: integer count of argc.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
		printf("%s\n", *argv);
		return (0);
}
