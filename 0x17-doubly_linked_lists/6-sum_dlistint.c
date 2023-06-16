#include "lists.h"

/**
 * sum_dlistint - a function that  Sums all the data of a dlistint_t list.
 * @head: The dlistint_t list head.
 *
 * Return: it returns all  The sum of all the data.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
