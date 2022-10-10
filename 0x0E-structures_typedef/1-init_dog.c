#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of
 * type struct dog.
 * @d : name of the struct of the dog.
 * @name : dog name.
 * @age : dog age.
 * @owner : dog owner.
 *
 * Return : no return value
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULLL)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
