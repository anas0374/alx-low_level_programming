#include "main.h"

/**
 *  jack_bauer - prints every minute of the day of Jack Bae.
 *  Return: 1 if c is lowercase Returns ,0 otherwise.
 */
void jack_bauer(void)
{
	int i,m;

	for (i = 0 ; i <= 23; i++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			_putchar(i/10 + '0');
			_putchar(i%10 + '0');
			_putchar(':');
			_putchar(m/10 + '0');
			_putchar(m%10 + '0');
			_putchar('\n');
		}
	}
}

