#include "sort.h"

/**
 * shell_sort - func that sorts in ascending order using the Shell sort algorithm
 * @array: The arraythat need to be sorted
 * @size: Num of elements in the array
 */
void shell_sort(int *array, size_t size)
{
	size_t space, x, y;
	int tmp;

	if (array == NULL || size < 2)
		return;

	while  (space < size / 3)
		space = space * 3 + 1;

	for (; space > 0; space /= 3)
	{
		for(x = space; x < size; ++x)
		{
			tmp = array[x];
				for(y = x; y >= space && array[y - space] > tmp; y -= space)
				{
					array[y] = array[y - space];
				}
			array[y] = tmp;
		}
		print_array(array, size);
	}
}
