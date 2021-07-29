#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len - returns number of element of a list_t list
 *@h: pointer to start of the list
 *Return: 0
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	return (i);
}
