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

        if (argc == 1)
        {
                printf("0\n");
				return (0);
        }
		if (argc < 3)
        {
                printf("Error\n");
				return (1);
        }
		for (; i < argc; i++)
		{
			add = add + atoi(argv[i]);
		} 
        printf("%d\n", add);
        return (0);
}