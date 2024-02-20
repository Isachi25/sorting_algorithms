#include "sort.h"

/**
 * change_nodes  - change two nodes in a doubly-linked list.
 * @k: A pointer to the head of the doubly-linked list.
 * @m1: The first node
 * @m2: Second node
*/

void change_nodes(listint_t **k, listint_t **m1, listint_t *m2)
{
	(*m1)->next = m2->next;
	if (m2->next != NULL)
		m2->next->prev = *m1;
	m2->prev = (*m1)->prev;
	m2->next = *m1;
	if ((*m1)->prev != NULL)
		(*m1)->prev->next = m2;
	else
		*k = m2;
	(*m1)->prev = m2;
	*m1 = m2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * using insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			change_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
