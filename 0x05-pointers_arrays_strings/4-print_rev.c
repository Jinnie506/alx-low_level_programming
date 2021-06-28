#include "holberton.h"
/**
 * print_rev - toma la cadena de la funcion.
 * @s: value taken from main
 * Return: (0)
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
