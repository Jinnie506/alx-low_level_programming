#include "holberton.h"

/**
 *is_palindrome - func that returns 1 if a string is a palindrome
 *@s: pointer parameter
 *Return: 1, 0
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (pal_check(s, len));
}

/**
 *_strlen_recursion - find lenght of string
 *@s: pointer parameter
 *Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}

/**
 *pal_check - check for palidrome
 *@a: function parameter
 *@length: function parameter
 *Return: 1, 0
 */

int pal_check(char *a, int length)
{
	if (length <= 1)
		return (1);
	else if (a[0] != a[length - 1])
		return (0);
	else
		return (pal_check((a + 1), (length - 2)));
}
