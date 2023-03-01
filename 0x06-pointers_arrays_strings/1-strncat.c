#include "main.h"
#include <stdio.h>
/**
 * *_strncat - a function that concatenates two strings
 * @dest: one of the strings to be concatenatedd
 * @src: the other string to be concatenated
 * @n: number of bytes
 * Return: always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int r = 0;
	int t = 0;

	for (; dest[t];)
	{
		t++;
	}

	while (r < n && src[r])
	{
		dest[t + i] = src[r];
		i++;
		r++;
	}
	return (dest);
}
