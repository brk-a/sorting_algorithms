#include "sort.h"

/**
 *bubble_sort - sort an array using bubble sort algo
 *
 *@array: arr containing elems
 *
 *@size: num of elems
 *
 *Return: nada
*/

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int flag;

if (array == NULL || size == 0)
return;

for (i = 0; i < size; i++)
{
flag = 0;
for (j = 0; size - 1 - i; j++)
{
if (array[j] < array[j + 1])
{
exchange(&array[j], &array[j + 1]);
print_array(array, size);
flag = 1;
}
if (!flag)
{
break;
}
}

}
}
