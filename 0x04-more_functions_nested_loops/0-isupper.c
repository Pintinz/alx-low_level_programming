#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: its the character that will be checked
 * Return: always 0 and 1
 */

int _isupper(int c)
{

	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
