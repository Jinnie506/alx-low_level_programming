#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c:  is the int that will use for the argument of the function
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
