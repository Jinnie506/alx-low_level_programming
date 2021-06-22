#include "holberton.h"

/**
 *main - print the word "holberton"
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	char ch[] = "Holberton";

	for (i = 0 ; i < 9 ; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
