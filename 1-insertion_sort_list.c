#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "sort.h"
/**
 * swap- swap values
 * @a:element
 * @b:element
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
    listint_t *t, *i;

    if (list == NULL || *list == NULL)
        return;

    i = (*list)->next;
    while (i != NULL)
    {
        t = i->prev;
        while (t != NULL && t->n > i->n)
        {
            _swap(&(t->n), &(i->n));
            t = t->prev;
            i = i->prev;
	    print_list(*list);
        }
        i = i->next;
    }
}
