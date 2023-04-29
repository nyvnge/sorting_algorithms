#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @c1: A pointer to the first node to swap.
 * @c2: The second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*c1)->next = c2->next;
	if (c2->next != NULL)
		c2->next->prev = *c1;
	c2->prev = (*c1)->prev;
	c2->next = *c1;
	if ((*c1)->prev != NULL)
		(*c1)->prev->next = c2;
	else
		*h = c2;
	(*c1)->prev = c2;
	*c1 = c2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Outputs list after swap
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *itrn, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (itrn = (*list)->next; iter != NULL; itrn = tmp)
	{
		tmp = itrn->next;
		insert = itrn->prev;
		while (insert != NULL && itrn->c < insert->c)
		{
			swap_nodes(list, &insert, itrn);
			print_list((const listint_t *)*list);
		}
	}
}
