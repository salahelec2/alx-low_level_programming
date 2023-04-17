#include "dog.h"

/**
 * init_dog - initializes the struct dog variables.
 * @d: pointer to the struct.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
