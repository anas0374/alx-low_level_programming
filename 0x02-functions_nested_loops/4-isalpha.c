#include "main.h"

/**
 * _isalpha - checks if a char islowercase.
 *  @c: is ksdfjnsd
 *  Return: 1 if c is lowercase Returns ,0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

