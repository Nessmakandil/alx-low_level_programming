#include "main.h"
/** 
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: count of argv.
 * @argv: string.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	
	argv++;
	
	return (0);
}
