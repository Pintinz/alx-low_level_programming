#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2)
		{
			i = i + 1;
		}
		else if (i == 4)
		{
			i = i + 1;
		}
	_putchar(i + '0');
	i++;
	}
	_putchar('\n');
}
