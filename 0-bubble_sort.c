#include "sort.h"
/**
 * bubble_sort - is a function that sorts array of ints
 * @array: This is the list of integers to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j = 0;
int temp = 0;
	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			print_array(array, size);
			}
		}
	}
}
