#include "sort.h"

/**
 * selection_sort  - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: The array to be order
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, tmp, menor;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		menor =  i;

		for (j = i + 1; j < size; j++)
		{

			if (array[j] < array[menor])
				menor = j;

		}
		tmp = array[i];
		array[i] = array[menor];
		array[menor] = tmp;

		if (menor != i)
			print_array(array, size);
	}

}
