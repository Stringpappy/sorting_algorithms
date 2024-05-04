#include "sort.h"
/**
 * bubble_sort - func that sort array of int in ascending order
 * @array: pointer to array
 * @size: number of element
 * Return: 0
 */
void bubble_sort(int *array, size_t size)
{
	long unsigned int i, j, swap;
	for (i = 0; i < size - 1; ++i)
	{
		for (j = 0; j < size - i - 1; ++j) 
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
                		array[j + 1] = swap;
			}
            	}
        
    	}	
}
