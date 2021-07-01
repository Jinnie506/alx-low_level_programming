#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase letters of a string
 * @givenStr: function parameter
 *Return: pointer
 */

char *string_toupper(char *givenStr)
{
	int i;

	for (i = 0; givenStr[i] != '\0'; i++)
	{
		if (givenStr[i] >= 'a' && givenStr[i] <= 'z')
		{
			givenStr[i] = givenStr[i] - 32;
		}
	}
	return (givenStr);
}
