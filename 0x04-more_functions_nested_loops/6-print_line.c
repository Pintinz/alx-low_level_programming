#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	char m = '_';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int h;

		for (h = 1; h <= n; h++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
