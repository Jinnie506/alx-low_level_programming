#include "holberton.h"

/**
 *print_line - a function that draws a straight line in the terminal
 *@n: function parameter
 *Return: 0
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
