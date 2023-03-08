#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that prints the length of a string
 * @s: the sring
 * Return: always n
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
	i = _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
