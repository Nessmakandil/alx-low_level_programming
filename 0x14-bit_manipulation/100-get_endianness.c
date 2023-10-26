#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	u.i = 1;
	return (u.c[0] == 1 ? 1 : 0);
}
