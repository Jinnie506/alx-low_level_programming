#include "holberton.h"

/**
 * print_last_digit - function that computes the absolute value of an integer
 * @n:  is the int that will use for the argument of the function
 * Return: 0
 */


int print_last_digit(int n)
{
	if (n > 0 || n == 0)
	{
		_putchar (n % 10 + '0');
		return (n % 10);
	}
	else
	{
		n = n * -1;
		_putchar (n % 10 + '0');
		return (n % 10);
	}
}
