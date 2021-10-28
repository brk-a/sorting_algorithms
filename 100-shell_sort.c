#include "sort.h"

/**
 *shell_sort - sorts an array using the Shell sort algo
 *shell sort algo implements the Knuth sequence
 *
 *@array: arr to sort
 *
 *@size: len of arr
 *
 *Return: nada
*/

void shell_sort(int *array, size_t size)
{

int i, j, gap, tmp;
gap = floor(((3 ^ size) - 1) / 2));

if (array == NULL || size <= 2)
return;

while(gap > 0)
{
for (i = gap; i < size; i++)
{
tmp = array[i];
j = i;
while (j >= gap && array[j - gap] > tmp)
{
array[j] = array[j - gap];
j -= gap;
}
array[j] = tmp;
}
gap /= 2;
print_array(array);
}
}
