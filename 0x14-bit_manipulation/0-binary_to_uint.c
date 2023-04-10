#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, multiply = 1;
	int length = 0;

	if (b == '\0')
		return (0);

	while (b[length])
	{
		length++;
	}

	while (len >= 0)
	{
		if (b[length] != '0')
		{
			if (b[length] != '1')
			{
				return (0);
			}
		}

		number += (b[length] - '0') * multiply;
		multiply *= 2;

		length--;
	}

	return (number);
}
