#include "variadic_functions.h"
/**
 * print_strings - print.
 *
 * @separator: string to be printed between numbers.
 * @n: number of inputs.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *foo;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		foo = va_arg(list, char *); 
		if (foo == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", foo);
			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(list);
}
