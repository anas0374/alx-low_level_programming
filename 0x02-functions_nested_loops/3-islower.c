#include "main.h"

/**
 * _islower - checks if a char islowercase.
 *  @c: is ksdfjnsd
 *  Return: 1 if c is lowercase Returns ,0 otherwise.
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
