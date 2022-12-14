#include "main.h"

/**
 *  print_last_digit - prints the last digit of a number.
 *  @n: is int
 *  Return: 1 if c is lowercase Returns ,0 otherwise.
 */
int print_last_digit(int n)
{
	n = _putchar('0' + (n % 10));
	return (n);
}

