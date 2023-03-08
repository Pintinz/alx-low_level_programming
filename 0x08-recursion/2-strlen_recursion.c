#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that prints the length of a string
 * @s: the sring
 * Return: always n
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
	return (0);
	}
	else
	{
	return ( _strlen_recursion(s + 1) + 1);
	}
}
