#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer of the dog
 * Return: Nothing
 */
 void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)");
		}
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)");
		}
	}
}
