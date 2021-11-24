#include "sort.h"
/**
 * swap_list - function to swap nodes
 * @node: node to exchange
 * @list: list of nodes
 */
void swap_list(listint_t *node, listint_t **list)
{
	listint_t *tmp = NULL;

	tmp = node->next;
	if (node->prev)
	{

		(node->prev)->next = tmp;
	}
	else
	{
		*list = tmp;
	}
	tmp->prev = node->prev;
	if (tmp->next)
	{
		(tmp->next)->prev = node;
	}
	node->next = tmp->next;
	tmp->next = node;
	node->prev = tmp;
	print_list(*list);
}
/**
 * insertion_sort_list -  sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: list to be sorted
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *act = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	act = (*list)->next;
	while (act != NULL)
	{
		while ((act->prev != NULL) && (act->n < (act->prev)->n))
		{

			swap_list(act->prev, list);
		}
		act = act->next;
	}

}
