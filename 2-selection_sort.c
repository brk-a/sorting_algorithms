#include "sort.h"

/**
 * selection_sort - sort an array using the selection sort algo
 *
 *@array: the arr to sort
 *
 * @size: len of  arr
 *
 * Return: nada
 */

void selection_sort(int *array, size_t size)
{
int i, j, min_idx;

if (array == NULL)
return;

for (i = 0; i < (size - 1) && size >= 2; i++)
{
min_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_idx])
{
min_idx = j;
}
}
if (min_idx != i)
{
exchange(&array[i], &array[min_idx]);
print_array(array, size);
}
}
}
