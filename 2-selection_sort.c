#include "sort.h"
/**
 * bubble_sort - Prints a list of integers
 * @array: ptr of array
 * @size: size of array
 */

void swap_(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
	
}

void selection_sort(int *array, size_t size)
{
    int min_num;
	size_t j, i;

    for (i = 0; i < size-1; i++)
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