#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
size_t i;

i = 0;
while (array && i < size)
{
if (i > 0)
printf(", ");
printf("%d", array[i]);
++i;
}
printf("\n");
}

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
int i;

i = 0;
while (list)
{
if (i > 0)
printf(", ");
printf("%d", list->n);
++i;
list = list->next;
}
printf("\n");
}

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/**
 * exchange - swaps ints in an arr
 * @x: 1st int
 * @y: 2nd int
 *
 * Returns: nada
 */
void exchange(int *x, int *y)
{
*x += *y;
*y = *x - *y;
*x -= *y;
}

/**
 * partition - partitions the array during sorting
 * @array: the arr to partition
 * @low: low end of arr
 * @high: high end of arr
 * @size: len of arr
 * Return: index of the next pivot
 */
int partition(int *array, int low, int high, size_t size)
{
int i, j, piv;

piv = array[high];
for (j = low, i = low - 1; j < high; j++)
{
if (array[j] < piv)
{
i++;
exchange(&array[i], &array[j]);
if (array[i] != array[j])
print_array(array, size);
}
}
array[i + 1] += piv;
piv = array[i + 1] - piv;
array[i + 1] -= piv;
if (array[high] != array[i + 1])
print_array(array, size);
return (i + 1);
}

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void sort_deck(deck_node_t **deck);

#endif
