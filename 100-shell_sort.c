#include "sort.h"
/**
 * shell_sort - function that sorts an array of ints in > order
 * using the shell sort algorithm and the knuth sequence
 * @array: array of type int to sort
 * @size: length of the array
 */
void shell_sort(int *array, size_t size)
{
		size_t n, gap = 1, j;
		int tmp, tmpint;

		if (size < 2)
			return;

		while (gap <= (size / 3))
		{
			gap = gap * 3 + 1;
		}
		for (; gap >= 1; gap /= 3)
		{
			for (n = gap; n < size; i++)
			{
				tmp = array[n];
				for (j = n; j >= gap && array[j - gap] > tmp; j -= gap)
				{
					tmpint = array[j];
					array[j] = array[j - gap];
					array[j - gap] = tmpint;
				}
			}
			print_array(array, size);
		}
}
