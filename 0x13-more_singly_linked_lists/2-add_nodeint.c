#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - a function that adds a new node at the beginningof a list
 * @head: a pointer
 * @n: intergers
 * Return: the address of the new element, null if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		return (NULL);
	}
	listint_t 
