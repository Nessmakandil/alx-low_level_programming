#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 *
 * @name: name.
 * @f: function.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
