#include "main.h"

/**
 *   times_table - prints every minute of the day of Jack Bae.
 *  Return: 1 if c is lowercase Returns ,0 otherwise.
 */
void times_table(void)
{
	int i, m, x;

	for (i = 0 ; i <= 9; i++)
	{
		for (m = 0 ; m < 10 ; m++)
		{
			x = i * m;
			if (x > 9)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else
			{
				_putchar(x + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		putchar('\n');
	}
}
