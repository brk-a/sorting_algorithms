#include "sort.h"

/**
 * quick_sort - sort an array using the quick sort algo
 *
 * @array: arr to sort
 *
 * @size: len of arr
 *
 * Return: nada
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL)
return;

sort_quick(array, 0, size - 1, size);
}


/**
 * sort_quick - recursively implement quick sort on an array
 * @array: arr to sort
 * @low: the end posn of elems less than pivot
 * @high: the posn compared to pivot
 * @size: len of arr
 *
 *Return: Void.
 */

void sort_quick(int *array, int low, int high, size_t size)
{
int piv;

if (high > low)
{
piv = partition(array, low, high, size);
sort_quick(array, low, piv - 1, size);
sort_quick(array, piv + 1, high, size);
}
}
