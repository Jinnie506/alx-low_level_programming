#include <stdio.h>

/**
 * main - print all single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%i", digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
