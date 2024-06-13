#include "sort.h"
/**
 * selction_sort - function that sorts an array of integers in ascending order
 * @array: array of num
 * @size: size of narray
 * Return: 0
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y;
	int save;

	for (x = 0;  < size - 1; x++)
	{
		size index_t = x;
		for (y = i + 1; y < size; y++)
		{
			if (arra[y] < array[index_T])
				index_t = y;
		}
		if (index_t != x)
		{
			save = array[x];
			array[index_t] = save;
			print_array(array, size);
		}
	}
}
