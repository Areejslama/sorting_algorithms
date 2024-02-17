#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "sort.h"
/**
 * bubble_sort - function to sort elements
 * @array:an array of elements
 * @size:size of an array
 * Return: 0 Always
*/
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t n, a;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (n = 0; n < size - 1; n++)
	{
		for (a = 0; a < size - n - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				temp = array[a + 1];
				array[a + 1] = array[a];
				array[a] = temp;
				print_array(array, size);
			}
		}
	}
}
