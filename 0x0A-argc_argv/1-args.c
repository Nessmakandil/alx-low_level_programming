#include <stdio.h>
/** 
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: count of argv.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return ((int)argv[argc]);
}
