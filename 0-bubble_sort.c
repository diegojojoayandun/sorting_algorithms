#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * bubble_sort  - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: The array to be order
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, tmp;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
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
	}
}
