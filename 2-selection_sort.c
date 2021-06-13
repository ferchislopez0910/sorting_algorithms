#include "sort.h"

/**
 * selection_sort - Write a function that sorts an array of integers
 * @array: ptr of array
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int min_num, aux;
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
			aux = array[min_num];
			array[min_num] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
	}
}
