#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int n, a;

	while (str[i] != '\0')
	{
		i++;
	}
	a = (i / 2);
	if (i % 2 == 0)
	{
		for (n = a; n < i; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = a + 1; n < i; n++)
		{
			_putchar(str[n]);
		}
	}

	_putchar('\n');
}
