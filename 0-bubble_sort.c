#include "sort.h"
/**
 * bubble_sort - Prints a list of integers
 * @array: ptr of array
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	int i, j;
	int tmp, iter;

	iter = size - 1;

	for (i = 0; i < iter; i++)
	{
		for (j = 0; j < iter - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
