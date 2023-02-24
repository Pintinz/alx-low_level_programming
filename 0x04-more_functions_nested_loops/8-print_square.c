#include "main.h"

/**
 * print_square - a function that prints a square
 * followed by a new line
 * @size: is the size of the square
 * Return: always 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		int i = 1;

		while (i <= size)
		{
			char m = '#';
			int j = 1;

			while (j <= size)
			{
				_putchar(m);
				j++;
			}
		_putchar('\n');
		i++;
		}
	}
}
