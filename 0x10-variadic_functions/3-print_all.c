#include "variadic_functions.h"
/**
 * print_all - print.
 *
 * @format: identifiers.
 *
 */

void print_all(const char * const format, ...) {
    const char* ptr;
    char ch;
    int intValue;
    float floatValue;
    char* stringValue;

    va_list args;
    va_start(args, format);

    ptr = format;

    while (*ptr)
    {
        if (*ptr == 'c')
        {
            ch = va_arg(args, int);
            printf("%c", ch);
        }
        else if (*ptr == 'i')
        {
            intValue = va_arg(args, int);
            printf("%d", intValue);
        }
        else if (*ptr == 'f')
        {
            floatValue = va_arg(args, double);
            printf("%f", floatValue);
        }
        else if (*ptr == 's')
        {
            stringValue = va_arg(args, char*);
            if (stringValue == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", stringValue);
            }
        }
        ptr++;
    }
    va_end(args);
    printf("\n");
}
