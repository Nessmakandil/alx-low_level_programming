#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: Input number.
 */

void print_number(int n)
{
	/*int w, x, y, z;*/

	if (n < 0)
	{
		_putchar('-');
		n = - n;
	}
	if (n < 10)
		_putchar(n + '0');
	if (n >= 10 && n < 100)
	{
		_putchar(n/10 + '0');
		_putchar(n - (n/10)*10 + '0');
	}
	if (n >= 100 && n < 1000)
        {
		_putchar(n/100 + '0');
                _putchar((n - (n/100)*100)/10 + '0');
                _putchar(n - (n/10)*10 + '0');
	}
	if (n >= 1000 && n < 10000)
        {
                _putchar(n/1000 + '0');
                _putchar((n - (n/1000)*1000)/100 + '0');
		_putchar((n - (n/100)*100)/10 + '0');
                _putchar(n - (n/10)*10 + '0');
        }

}
