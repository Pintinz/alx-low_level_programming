#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *last;

	if (head == NULL || head->next == NULL)
		return (NULL);

	first = head->next;
	last = (head->next)->next;

	while (last)
	{
		if (first == last)
		{
			first = last;

			while (first != last)
			{
				first = last->next;
				last = last->next;
			}

			return (first);
		}

		first = first->next;
		last = (last->next)->next;
	}

	return (NULL);
}
