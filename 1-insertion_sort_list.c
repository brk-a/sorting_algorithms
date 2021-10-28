#include "sort.h"

/**
 * insertion_sort_list - sort a list using the insertion sort algo
 *
 * @list: list to sort
 *
 * Return: nada
 */

void insertion_sort_list(listint_t **list)
{
listint_t *cur, *pre, *tmp;

if (list == NULL || *list == NULL)
return;

if (((*list)->next) == NULL)
return;

pre = (*list);
cur = pre->next;
while (cur)
{
pre = cur->prev;
tmp = pre;
while (cur->n < pre->n)
{
pre->next = cur->next;
cur->prev = pre->prev;
if (pre->prev)
prev->prev->next = cur;
if (cur->next)
cur->next->prev = pre;
cur->next = pre;
pre->prev = cur;
if (cur->prev)
pre = cur->prev;
else
{
(*list) = cur;
print_list(*list);
break;
}
print_list(*list);
}
if (cur->n < tmp->n)
cur = tmp->next;
else if (tmp->next)
cur = tmp->next->next;
else
cur = tmp->next;
}
}
