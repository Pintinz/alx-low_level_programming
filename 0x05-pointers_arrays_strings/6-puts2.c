#include <stdio.h>
#include "main.h"

/**
 * puts2 - a function that prints ev ery other character of a string
 * starting with the first character, followed by a new line
 * @str: a pointer to be pointed
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
