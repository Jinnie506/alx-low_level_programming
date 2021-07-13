#include <stdlib.h>
#include "holberton.h"

/**
 *_strdup - func that returns a pointer to a newly allocated space in memory
 *@str: function parameter
 *Return: 0
 */

char *_strdup(char *str)
{
	char *array;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	array = malloc(sizeof(*str) * (i + 1));
	if (array == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		array[j] = str[j];
		j++;
	}
	return (array);
}
