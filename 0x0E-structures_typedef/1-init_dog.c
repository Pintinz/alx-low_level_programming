#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of
 * type struct dog
 * @d: the variable
 * @name: the name
 * @age: the age
 * @owner: the name of the owner
 */

 void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
