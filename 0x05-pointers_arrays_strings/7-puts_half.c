#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	n = (i - 1) / 2;
	for (n; n <= n * 2; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
