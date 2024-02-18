#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "sort.h"

/**
 * swap_element - Swap two elements in an array
 * @array: The array
 * @i:first element
 * @j:second element
 * Return: void
 */
void swap_element(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

/**
 * partition - Partition the array
 * @array: The array to be partitioned
 * @first: Index of the first element
 * @last: Index of the last element
 * @size: Size of the array
 * Return: Index of the pivot element
 */
int partition(int array[], int first, int last, size_t size)
{
	int pivot;
	int b, c;

	pivot = array[last];
	b = first - 1;
	for (c = first; c < last; c++)
	{
		if (array[c] < pivot)
		{
			b++;
			if (b != c)
			{
				swap_element(array, b, c);
				print_array(array, size);
			}
		}
	}
	if (array[b + 1] != array[last])
	{
		swap_element(array, b + 1, last);
		print_array(array, size);
	}
	return (b + 1);
}
/**
 * quicksort - Sort elements
 * @array: The array
 * @first: Index of the first element
 * @last: Index of the last element
 * @size: Size of the array
 * Return: void
 */
void quicksort(int array[], int first, int last, size_t size)
{
	if (first < last)
	{
		int p;

		p = partition(array, first, last, size);
		quicksort(array, first, p - 1, size);
		quicksort(array, p + 1, last, size);
	}
}
/**
 * quick_sort - Sort an array of integers
 * @array: The array to be sorted
 * @size: Size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
