#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	int nu;

	for (num = 0; num <= 8; num++)
	{
		for  (nu = num +1; nu <= 9; nu++)
		{
			putchar((num % 10) + '0');
			putchar((nu % 10) + '0');
			if (num == 8 && nu == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

