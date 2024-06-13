#include "sort.h"
/**
 * bubble_sort - func that sort array of int in ascending order
 * @array: pointer to array
 * @size: number of element
 * Return: 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int swap;

	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				swap = array[y];
				array[y] = array[y + 1];
				array[y + 1] = swap;
				print_array(array, size);
			}

		}
	}
}
