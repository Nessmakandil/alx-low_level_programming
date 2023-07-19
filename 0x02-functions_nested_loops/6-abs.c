#include<stdio.h>
#include"main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: is the number to be checked
 *
 * Return: n if n is positive and -1*n otherwise.
 *
 */

int _abs(int n)
{
        if (n >= 0)
        {
                return (n);
        }
        else
        {
                return (-1*n);
        }
}
