#include <stdio.h>
#include <stdlib.h>
/**
 * main - Starting point
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 1, j = 1, sum = 0;

	while (i < 4000000)
	{
		i = i + j;
		j = i - j;
		if (i % 2 == 0)
			sum += i;
	}
	printf("Sum is: %d", sum);
	return (0);
}
