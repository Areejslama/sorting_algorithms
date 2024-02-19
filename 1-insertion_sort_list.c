#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "sort.h"
/**
 * _swap- swap values
 * @k:element
 * @v:element
 * Return:void
*/
void _swap(const int *k, const int *v)
{
	int temp = *(int *)k;
	*(int *)k = *(int *)v;
	*(int *)v = temp;
}
/**
 * insertion_sort_list- sort linked list
 * @list:pointer to linked list
 *
 * Return:void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *h, *r;

	if (list == NULL || *list == NULL)
		return;
	h = (*list)->next;
	while (h != NULL)
	{
		r = h->prev;
		while (r != NULL && r->n > h->n)
		{
			_swap(&(r->n), &(h->n));
			r = r->prev;
			h = h->prev;
			print_list(*list);
		}
		h = h->next;
	}
}
