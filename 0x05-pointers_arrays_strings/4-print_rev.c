#include "main.h"

/**
 *  print_rev -  prints a string, in reverse, followed by a new line
 *  @s: int to pointer
 *  Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}
	for (a = i; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
