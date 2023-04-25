#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - function
 * @array: the array of integer
 * @size: the len of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t x = 0, y;
	int temp;

	while (x < size)
	{
		for (y = 0; y < size - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
		}
		y++;
	}
}
