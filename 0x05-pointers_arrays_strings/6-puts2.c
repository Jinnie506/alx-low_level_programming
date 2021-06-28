#include "holberton.h"

/**
 *puts2 - print pair values.
 *@str: value to be evaluate.
 *Return: not.
 */

void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (z = 0 ; z <= l ; z += 2)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
