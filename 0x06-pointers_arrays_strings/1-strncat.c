#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: intger
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n);
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
