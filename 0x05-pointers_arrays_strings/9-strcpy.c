#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest
 * @dest: a string
 * @src: a string
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
