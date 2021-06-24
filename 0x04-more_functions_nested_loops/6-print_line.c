#include "holberton.h"

/**
 *print_line - a function that draws a straight line in the terminal
 *@n: function parameter
 *Return: 0
 */

void print_line(int n)
{
	char c;

	while (c <= n && n > 0)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
