#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - function
 * @array: array of integer
 * @size: length of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int tmp;

	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
		i++;
	}
}
