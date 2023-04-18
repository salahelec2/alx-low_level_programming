#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees structure elements.
 * @d: dog structure.
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
