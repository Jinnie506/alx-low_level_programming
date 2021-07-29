#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - prints all the element of a list_t list
 *@h: pointer to start of the list
 *Return: 0
 */

size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp != NULL; i++)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
