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
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
        if (va_arg(list, char *) != NULL)
		{
			printf("%s", va_arg(list, char *));
            if (separator != NULL && i != n - 1)
            {
                printf("%s", separator);
            }
		}
		else
		{
			printf("(nil)");
            if (separator != NULL && i != n - 1)
            {
                printf("%s", separator);
            }
		}
        
		
		
	}
	printf("\n");
	va_end(list);
}
