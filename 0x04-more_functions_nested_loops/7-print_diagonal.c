#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: takes in an integer
 */

void print_diagonal(int n)
{
	int a = 0;

	int b = 0;

	if (n <= 0)
		_putchar('\n');
	while (a < n)
	{
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		b = 0;
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}
