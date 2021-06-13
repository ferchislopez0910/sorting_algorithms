#include "sort.h"
void swap_(int *xp, int *yp);
/**
 * swap_ - Prints a list of integers
 * @xp: ptr of array
 * @yp: size of array
 */

void swap_(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 * selection_sort - Write a function that sorts an array of integers
 * @array: ptr of array
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int min_num;
	size_t j, i;

	for (i = 0; i < size - 1; i++)
	{
		min_num = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_num])
				min_num = j;
		}
		if (array[min_num] < array[i])
		{
			swap_(&array[min_num], &array[i]);
			print_array(array, size);
		}
	}
}
