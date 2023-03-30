#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 * @h: a pointer to the list to iterato to.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t i = 0;

	if (h && h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		tmp = h;
		if (tmp)
			tmp = h;

		while (tmp)
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}
