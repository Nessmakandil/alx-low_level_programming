#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: digit
 * Return: binary digit
 */
void print_binary(unsigned long int n)
{
	char b[(sizeof(n) * CHAR_BIT) + 1];
    char *p = b + sizeof(b);
    *--p = '\0';
    do {
        *--p = '0' + (n & 1);
    } while (n >>= 1);
	
	for (;*p;)
	{
		_putchar(*p);
		p++;
	}
    	
}