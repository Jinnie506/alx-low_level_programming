#include "holberton.h"

/**
 *swap_int - function that swaps the values of two integers
 *@a: pointer function parameter
 *@b: pointer function parameter
 *Return: always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
