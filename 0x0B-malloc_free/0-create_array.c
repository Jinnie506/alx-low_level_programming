#include <stdlib.h>
#include "holberton.h"

/**
 *create_array - function that creates an array of chars
 *@size: function parameter
 *@c: function parameter
 *Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
