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
    if (argc < 4)
    {
        printf("Error\n");
        exit (98);
    }
    if (argv[2] != "+" && argv[2] != "-"
    && argv[2] != "*" && argv[2] != "/" && argv[2] != "%")
    {
        printf("Error\n");
        exit (99);
    }
    if (argv[3] == 0 && (argv[2] == "/" || argv[2] == "%"))
    {
        printf("Error\n");
        exit (100);
    }
    f = get_op_func(argv[2]);
    printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
    return (0);
}