#include "sort.h"

/**
 * selection_sort - function that sorts a given list of ints
 * @array: This is the list of ints to be sorted ascendingly
 * @size: this is the array size
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min = 0;
	int temp = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
