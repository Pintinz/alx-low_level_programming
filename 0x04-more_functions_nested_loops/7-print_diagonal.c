#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	int m;
	char b = `'\';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
