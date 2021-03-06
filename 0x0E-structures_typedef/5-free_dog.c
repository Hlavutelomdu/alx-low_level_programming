#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for a struct dog
 * @d: struct dog to fre
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
