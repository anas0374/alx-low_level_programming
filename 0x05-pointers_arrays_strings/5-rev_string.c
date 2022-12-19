#include "main.h"

/**
 *  rev_string -  prints a string, in reverse, followed by a new line
 *  @s: int to pointer
 *  Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	for (a = i - 1; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
}
