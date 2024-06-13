#include "sort.h"
/**
 * void insertion_sort_list- func that sort list using insertion sort
 *@list: pointer
 *Return 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *point;


	point = (*list)->next;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	while (point != NULL)
	{
		listint_t *insert = point->prev;

		while (insert != NULL && insert->n > point->n)
		{
			if (insert->prev != NULL)
				insert->prev->next = point;
			else
				*list = point;
			if (point->next != NULL)
				point->next->prev = insert;

			insert->next = point->next;
			point->prev = insert->prev;
			point->next = insert;
			insert->prev = point;

			print_list(*list);
			insert = point->prev;
		}
		point = point->next;
	}
}
