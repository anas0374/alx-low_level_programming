#include "main.h"

/**
 * print_triangle - entry point
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, size, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <=  size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (x = 1; x <= i; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
