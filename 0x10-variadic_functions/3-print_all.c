#include "variadic_functions.h"
/**
 * print_all - print.
 *
 * @format: identifiers.
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *foo;
	char *separator = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					foo = va_arg(list, char *);
					if (!foo)
						foo = "(nil)";
					printf("%s%s", separator, foo);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
