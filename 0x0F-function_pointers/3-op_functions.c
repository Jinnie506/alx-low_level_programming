#include <stdio.h>
#include "3-calc.h"

/**
 *op_add - sum of a and b
 *@a: function parameter
 *@b: function parameter
 *Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - difference of a and b
 *@a: function parameter
 *@b: function parameter
 *Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - product of a and b
 *@a: function parameter
 *@b: function parameter
 *Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: number 1
 * @b: number 2
 * Return: result of divison
 **/
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
/**
 * op_mod - calculates mod of two ints
 * @a: number 1
 * @b: number 2
 * Return: mod of 1, 2
 **/
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
