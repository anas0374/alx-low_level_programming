#include "main.h"

/**
 * print_sign - checks if sign.
 *  @n: is int
 *  Return: 1 if c is lowercase Returns ,0 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < -1)
	{
		_putchar('-');
		return (-1);
	}
}

