#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: is the number of times the character \ should be printed
 * Return: always 0
 */

void print_diagonal(int n)
{
	int m;
	char b = '\\';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			if (m == 1)
			{
			_putchar(b);
			_putchar('\n');
			}
			if (m == 2)
			{
			_putchar(' ');
			_putchar(b);
                        _putchar('\n');
			}
			else if (m == 3)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(b);
                        _putchar('\n');
			}
			else if (m == 4)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(b);
                        _putchar('\n');
			}
			else if (m == 5)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(b);
                        _putchar('\n');
			}
			else if (m == 6)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(b);
                        _putchar('\n');
			}
			else if (m == 7)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(b);
                        _putchar('\n');
			}
			else if (m == 8)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(b);
                        _putchar('\n');
			}
			else if (m == 9)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(b);
                        _putchar('\n');
			}
			else if (m == 10)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(b);
                        _putchar('\n');
			}
		}
	_putchar('\n');
	}
}
