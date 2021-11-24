#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: list of number to order
 * @size: Lenght of array
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	int stop = (size - 1), i;
	int flag, tmp = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < stop; i++)
	{
		flag = 0;

		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			flag = 1;
			print_array(array, size);
		}
		if (flag == 0 && i == (stop - 1))
		{
			return;
		}
		if (i == (stop - 1) && flag == 1)
		{
			i = -1;
			stop = stop - 1;
		}

	}

}
