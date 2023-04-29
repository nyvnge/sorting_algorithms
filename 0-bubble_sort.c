#include "sort.h"

/**
 * swap_pos - swaps position of values array
 *
 * @array: array to be changed
 * @first: first index
 * @second: second index
 */
void swap_pos(int **array, size_t first, size_t second)
{
	int a;

	a = (*array)[first];
	(*array)[first] = (*array)[second];
	(*array)[second] = a;
}

/**
 * bubble_sort - sorts in form of a bubble
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{i
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_pos(&array, j, j + 1);
				print_array(array, size);
				flag = 1;
			}
		}
		if (!flag)
			break;
	}
}
