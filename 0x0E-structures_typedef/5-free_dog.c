#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the structure dog.
 * @d: pointer to the structure.
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
