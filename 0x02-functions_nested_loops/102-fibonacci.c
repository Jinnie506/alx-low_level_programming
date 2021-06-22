#include <stdio.h>
#include "holberton.h"

/**
 *main - Starting point
 *printFibonacciNumbers - function that prints first 50 Fibonacci Numbers
 *Return 0
 *@n: int argument
 */

void printFibonacciNumbers(void)
{
	long int f1 = 0;

	long int f2 = 1;

	int i;

	long int next;

	for (i = 1; i < 50; i++)
	{
		printf("%ld, ", f2);
		next = f1 + f2;

		f1 = f2;
		f2 = next;
	}
}
int main()
{
	printFibonacciNumbers();
	return 0;
}
