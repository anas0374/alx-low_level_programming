#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: first char
 *
 * @src: second char
 *
 *  Return: dest
 */

char *_strncat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = ('\0');
	return (dest);
}
