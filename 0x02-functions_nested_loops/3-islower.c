#include "main.h"

/**
 * _islower - checks if a char islowercase.
 *  @c: is ksdfjnsd
 *  Return: 1 if c is lowercase Returns ,0 otherwise.
 */
int _islower(int c)
{
	if (c <= 'A' && c >= 'Z')
		return (0);
	else
		return (1);
}
