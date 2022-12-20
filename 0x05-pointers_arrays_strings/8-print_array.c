#include "main.h"
/**
 * print_array - prints n elements of an array of integers.
 * @n: number
 * @a: array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		_putchat(',');
		_putchar(' ');
	}
	_putchar('\n');
}
