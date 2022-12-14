#include "main.h"

/**
 * _abs - cal abs.
 *  @n: is int
 *  Return: 1 if c is lowercase Returns ,0 otherwise.
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	_putchar(n);
	return (n);
}

