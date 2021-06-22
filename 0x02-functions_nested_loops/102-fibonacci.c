#include <stdio.h>
#include "holberton.h"

/**
 *printFibonacciNumbers - function that prints first 50 Fibonacci Numbers
 *Return 0
 *@n: int argument
 */

void printFibonacciNumbers(void)
{
	int f1 = 0;

	int f2 = 1;

	int i;

	for (i = 1; i < 50; i++)
	{
		printf("%d ", f2);
		int next = f1 + f2;

		f1 = f2;
		f2 = next;
	}
}
