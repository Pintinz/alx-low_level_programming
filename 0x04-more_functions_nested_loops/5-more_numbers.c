#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		while (j < 15)
		{
			int k = 10;

			if (j >= 10)
			{
			_putchar((k / 10) + '0');
			}
		_putchar((j % 10) + '0');
		j++;
		}
	_putchar('\n');
	}
}
