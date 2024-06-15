#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * division - pivot partition scheme
 * @array: The array to be sorted
 * @low: Starting index of the division
 * @high: index of the division end
 * @size: the array size
 *
 * Return: Index of the pivot element
 */
size_t division(int *array, ssize_t low, ssize_t high, size_t size)
{
    int part,save;
    ssize_t i, j;

    part = array[high];
    i = low - 1;

    for (j = low; j < high; j++)
    {
        if (array[j] < part)
        {
            i++;
            save = array[i];
            array[i] = array[j];
            array[j] = save;
            if (i != j)
            {
                print_array(array, size);
            }
        }
    }

    save  = array[i + 1];
    array[i + 1] = array[high];
    array[high] = save;
    if (i + 1 != high)
    {
        print_array(array, size);
    }

    return (i + 1);
}

/**
 * quicksort - func that sort  array in ascendimng order with quicksort
 * @array: array to be sorted
 * @low: index of the division
 * @high:  index of the division
 * @size:  the array size
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
    ssize_t fi;

    if (low < high)
    {
        fi = division(array, low, high, size);
        quicksort(array, low, fi - 1, size);
        quicksort(array, fi + 1, high, size);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    quicksort(array, 0, size - 1, size);
}
