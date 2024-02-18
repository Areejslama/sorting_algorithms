#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "sort.h"
/**
 * selection_sort- function that sort an array
 * @array:the array to be sorted
 * @size:the size of an array
 * Return:void
*/
void selection_sort(int *array, size_t size)
{
	size_t i, n, min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (n = i + 1; n < size; n++)
		{
			if (array[n] < array[min])
				min = n;
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
