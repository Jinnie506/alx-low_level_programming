#include<stdio.h>
#include "holberton.h"

/**
 *_atoi - update value.
 *@s: value to be evaluate.
 *Return: 0
 */

int _atoi(char *s)
{
	int sign = 1, number = 0, index = 0;

	if (s[0] == '-')
	{
		sign = -1;
		index = 1;
	}

	while (s[index] != '\0')
	{
		if(s[index] >= '0' && s[index] <= '9')
		{
			number = number * 10 + s[index] - '0';
		}
		else
		{
			break;
		}
		index++;
	}
	/* multiply number with sign to make it negative number if sign < 0*/
	number = number * sign;
	return (number);
}
