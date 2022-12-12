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
	int n;

	for (num = 0; num <= 8; num++)
	{
		for  (nu = num + 1; nu <= 9; nu++)
		{
			for  (n = nu + 1; n <= 9; n++)
			{
				putchar((num % 10) + '0');
				putchar((nu % 10) + '0');
				putchar((n % 10) + '0');
				if (num == 7 && nu == 8 && n == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
