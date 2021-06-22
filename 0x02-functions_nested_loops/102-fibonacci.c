#include <stdio.h>
#include "holberton.h"
/**
 * main - starting point
 *
 *Return: Always 0
 */

int main(void)
{
	long int f1 = 1;

	long int f2 = 1;

	int i;

	long int next;

	for (i = 1; i <= 50; i++)
	{
		if (f2 == 1)
			printf("%ld", f2);
		else
			printf(", %ld", f2);
		next = f1 + f2;

		f1 = f2;
		f2 = next;
	}
}
