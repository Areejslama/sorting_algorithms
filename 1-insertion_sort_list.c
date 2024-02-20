#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "sort.h"
/**
 * insertion_sort_list - Sorts a list of integers
 * @list: a list to sort
 * Return:void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *t;
	listint_t *h;

	t = *list;
	t = t->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (t != NULL)
	{
		while (t->prev != NULL && t->n < t->prev->n)
		{
			h = t;

			if (t->next != NULL)
				t->next->prev = h->prev;
			t->prev->next = h->next;
			t = t->prev;
			h->prev = t->prev;
			h->next = t;
			if (t->prev != NULL)
				t->prev->next = h;
			t->prev = h;
			if (h->prev == NULL)
				*list = h;
			t = t->prev;
		}
		t = t->next;
		print_list(*list);
	}
}
