#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: its the character that will be checked
 * Return: always 0 and 1
 */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
